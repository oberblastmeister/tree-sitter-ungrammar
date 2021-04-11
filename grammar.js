module.exports = grammar({
    name: 'ungrammar',

    extras: $ => [/\s/, $.comment],

    rules: {
        grammar: $ => repeat($.node),

        node: $ => prec(4, seq(
            field('name', $.ident),
            '=',
            field('rule', $._compound_rule),
        )),

        _compound_rule: $ => choice(
            $.or_rule,
            $.and_rule,
            $.rule,
        ),

        or_rule: $ => prec.left(3, seq($._compound_rule, '|', $._compound_rule)),

        and_rule: $ => prec.left(2, seq($._compound_rule, $._compound_rule)),

        rule: $ => choice(
            $.ident,
            $.token_ident,
            seq($.rule, '?'),
            seq($.rule, '*'),
            seq('(', $.rule, ')'),
            seq(field('label', $.ident), ':')
        ),

        ident: $ => /[a-zA-Z]+/,

        token_ident: $ => /'.*?'/,

        comment: $ => token(seq('//', /.*/)),
    },
});
