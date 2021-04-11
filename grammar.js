module.exports = grammar({
    name: 'ungrammar',

    conflicts: $ => [
        [$._rule],
        [$._atom_rule],
        [$.alt_rule],
        [$.seq_rule],
    ],

    extras: $ => [/\s/, $.comment],

    rules: {
        grammar: $ => repeat1($.node),

        node: $ => seq(
            field('name', $.ident),
            '=',
            field('rule', $._rule),
        ),

        // _atom_rule: $ => choice(
        //     seq($.ident, optional($.modifier)),
        //     seq($.token_ident, optional($.modifier)),
        //     seq('(', $._rule, ')', optional($.modifier)),
        //     seq(field('label', $.ident), ':', $._atom_rule, optional($.modifier))
        // ),
        _atom_rule: $ => seq(choice(
            $.ident,
            $.token_ident,
            seq('(', $._rule, ')'),
            seq(field('label', $.ident), ':', $._atom_rule)
        ), optional($.modifier)),

        modifier: $ => choice('?', '*'),

        _rule: $ => choice(
            // prec($.seq_rule),
            $.seq_rule,
            $.alt_rule,
        ),

        alt_rule: $ => seq(
            $.seq_rule,
            repeat1(seq('|', $.seq_rule))
        ),

        seq_rule: $ => repeat1($._atom_rule),

        ident: $ => /[a-zA-Z]+/,

        token_ident: $ => seq(
            '\'',
            repeat(/[^\']/),
            token.immediate('\''),
        ),

        comment: $ => token(seq('//', /.*/)),
    },
});
