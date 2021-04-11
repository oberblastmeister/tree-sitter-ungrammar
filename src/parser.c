#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_QMARK = 5,
  anon_sym_STAR = 6,
  anon_sym_PIPE = 7,
  sym_ident = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_token_ident_token1 = 10,
  anon_sym_SQUOTE2 = 11,
  sym_comment = 12,
  sym_grammar = 13,
  sym_node = 14,
  sym__atom_rule = 15,
  sym_label = 16,
  sym_modifier = 17,
  sym__rule = 18,
  sym_token_ident = 19,
  aux_sym_grammar_repeat1 = 20,
  aux_sym__rule_repeat1 = 21,
  aux_sym_token_ident_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [anon_sym_PIPE] = "|",
  [sym_ident] = "ident",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_token_ident_token1] = "token_ident_token1",
  [anon_sym_SQUOTE2] = "'",
  [sym_comment] = "comment",
  [sym_grammar] = "grammar",
  [sym_node] = "node",
  [sym__atom_rule] = "_atom_rule",
  [sym_label] = "label",
  [sym_modifier] = "modifier",
  [sym__rule] = "_rule",
  [sym_token_ident] = "token_ident",
  [aux_sym_grammar_repeat1] = "grammar_repeat1",
  [aux_sym__rule_repeat1] = "_rule_repeat1",
  [aux_sym_token_ident_repeat1] = "token_ident_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_ident] = sym_ident,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_token_ident_token1] = aux_sym_token_ident_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_comment] = sym_comment,
  [sym_grammar] = sym_grammar,
  [sym_node] = sym_node,
  [sym__atom_rule] = sym__atom_rule,
  [sym_label] = sym_label,
  [sym_modifier] = sym_modifier,
  [sym__rule] = sym__rule,
  [sym_token_ident] = sym_token_ident,
  [aux_sym_grammar_repeat1] = aux_sym_grammar_repeat1,
  [aux_sym__rule_repeat1] = aux_sym__rule_repeat1,
  [aux_sym_token_ident_repeat1] = aux_sym_token_ident_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_token_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_rule] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym_token_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_grammar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 3:
      if (eof) ADVANCE(5);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_token_ident_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_token_ident_token1);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_token_ident_token1);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_grammar] = STATE(35),
    [sym_node] = STATE(28),
    [aux_sym_grammar_repeat1] = STATE(28),
    [sym_ident] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(11), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(7), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [22] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(14), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(7), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [44] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(14), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(7), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [63] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_modifier,
    ACTIONS(18), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(16), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [82] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(11), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(7), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_modifier,
    ACTIONS(14), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(16), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [120] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
    STATE(8), 2,
      sym__atom_rule,
      aux_sym__rule_repeat1,
  [145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [159] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym__rule_repeat1,
    STATE(26), 1,
      sym__atom_rule,
    STATE(34), 1,
      sym__rule,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
  [185] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym__rule_repeat1,
    STATE(26), 1,
      sym__atom_rule,
    STATE(36), 1,
      sym__rule,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
  [211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
    STATE(8), 2,
      sym__atom_rule,
      aux_sym__rule_repeat1,
  [235] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_ident,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
    STATE(8), 2,
      sym__atom_rule,
      aux_sym__rule_repeat1,
  [259] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
    STATE(8), 2,
      sym__atom_rule,
      aux_sym__rule_repeat1,
  [283] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      aux_sym__rule_repeat1,
    STATE(25), 1,
      sym__atom_rule,
    STATE(32), 1,
      sym__rule,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [351] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_ident,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
    STATE(8), 2,
      sym__atom_rule,
      aux_sym__rule_repeat1,
  [375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [403] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
    STATE(19), 2,
      sym__atom_rule,
      aux_sym__rule_repeat1,
  [424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    STATE(4), 2,
      sym_label,
      sym_token_ident,
    STATE(12), 2,
      sym__atom_rule,
      aux_sym__rule_repeat1,
  [445] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_ident,
    STATE(21), 1,
      sym__atom_rule,
    STATE(6), 2,
      sym_label,
      sym_token_ident,
  [465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_PIPE,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_ident,
      anon_sym_SQUOTE,
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_PIPE,
    ACTIONS(64), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_ident,
      anon_sym_SQUOTE,
  [491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym_ident,
    STATE(27), 2,
      sym_node,
      aux_sym_grammar_repeat1,
  [505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_node,
      aux_sym_grammar_repeat1,
  [519] = 4,
    ACTIONS(77), 1,
      aux_sym_token_ident_token1,
    ACTIONS(79), 1,
      anon_sym_SQUOTE2,
    ACTIONS(81), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_token_ident_repeat1,
  [532] = 4,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_token_ident_token1,
    ACTIONS(86), 1,
      anon_sym_SQUOTE2,
    STATE(30), 1,
      aux_sym_token_ident_repeat1,
  [545] = 4,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_token_ident_token1,
    ACTIONS(90), 1,
      anon_sym_SQUOTE2,
    STATE(30), 1,
      aux_sym_token_ident_repeat1,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_ident,
  [566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_EQ,
  [573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 101,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 235,
  [SMALL_STATE(14)] = 259,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 309,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 351,
  [SMALL_STATE(20)] = 375,
  [SMALL_STATE(21)] = 389,
  [SMALL_STATE(22)] = 403,
  [SMALL_STATE(23)] = 424,
  [SMALL_STATE(24)] = 445,
  [SMALL_STATE(25)] = 465,
  [SMALL_STATE(26)] = 478,
  [SMALL_STATE(27)] = 491,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 519,
  [SMALL_STATE(30)] = 532,
  [SMALL_STATE(31)] = 545,
  [SMALL_STATE(32)] = 558,
  [SMALL_STATE(33)] = 566,
  [SMALL_STATE(34)] = 573,
  [SMALL_STATE(35)] = 580,
  [SMALL_STATE(36)] = 587,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atom_rule, 1), SHIFT(16),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atom_rule, 3), SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rule_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rule_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rule_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rule_repeat1, 2), SHIFT_REPEAT(29),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 1),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__rule, 1), SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_ident, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__rule, 3), SHIFT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_ident, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rule_repeat1, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_ident_repeat1, 2), SHIFT_REPEAT(30),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_ident_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ungrammar(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
