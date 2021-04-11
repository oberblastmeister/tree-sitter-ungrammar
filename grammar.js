module.exports = grammar({
    name: 'ungrammar',

    conflicts: $ => [
        [$._rule],
        [$._atom_rule],
    ],

    extras: $ => [/\s/, $.comment],

    rules: {
        grammar: $ => repeat1($.node),

        node: $ => seq($.ident, '=', $._rule),

        _atom_rule: $ => choice(
            seq($.ident, optional($.modifier)),
            seq($.token_ident, optional($.modifier)),
            seq('(', $._rule, ')', optional($.modifier)),
            seq($.label, optional($.modifier)),
        ),

        label: $ => seq($.ident, ':', $._atom_rule),

        modifier: $ => choice('?', '*'),

        _rule: $ => choice(
            repeat1($._atom_rule),
            seq(
                $._atom_rule,
                '|',
                repeat1($._atom_rule),
            ),
        ),

        _repeated_rule: $ => repeat1($._rule),

        ident: $ => /[a-zA-Z]+/,

        token_ident: $ => seq(
            '\'',
            repeat(/[^\']/),
            token.immediate('\''),
        ),

        comment: $ => token(seq('//', /.*/)),
    },
});
