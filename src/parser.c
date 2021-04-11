#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_PIPE = 4,
  anon_sym_QMARK = 5,
  anon_sym_STAR = 6,
  anon_sym_COLON = 7,
  sym_ident = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_token_ident_token1 = 10,
  anon_sym_SQUOTE2 = 11,
  sym_comment = 12,
  sym_grammar = 13,
  sym_node = 14,
  sym__compound_rule = 15,
  sym_parenthesized = 16,
  sym__single_rule = 17,
  sym_or_rule = 18,
  sym_and_rule = 19,
  sym_rule = 20,
  sym_token_ident = 21,
  aux_sym_grammar_repeat1 = 22,
  aux_sym_token_ident_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [anon_sym_COLON] = ":",
  [sym_ident] = "ident",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_token_ident_token1] = "token_ident_token1",
  [anon_sym_SQUOTE2] = "'",
  [sym_comment] = "comment",
  [sym_grammar] = "grammar",
  [sym_node] = "node",
  [sym__compound_rule] = "_compound_rule",
  [sym_parenthesized] = "parenthesized",
  [sym__single_rule] = "_single_rule",
  [sym_or_rule] = "or_rule",
  [sym_and_rule] = "and_rule",
  [sym_rule] = "rule",
  [sym_token_ident] = "token_ident",
  [aux_sym_grammar_repeat1] = "grammar_repeat1",
  [aux_sym_token_ident_repeat1] = "token_ident_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_ident] = sym_ident,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_token_ident_token1] = aux_sym_token_ident_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_comment] = sym_comment,
  [sym_grammar] = sym_grammar,
  [sym_node] = sym_node,
  [sym__compound_rule] = sym__compound_rule,
  [sym_parenthesized] = sym_parenthesized,
  [sym__single_rule] = sym__single_rule,
  [sym_or_rule] = sym_or_rule,
  [sym_and_rule] = sym_and_rule,
  [sym_rule] = sym_rule,
  [sym_token_ident] = sym_token_ident,
  [aux_sym_grammar_repeat1] = aux_sym_grammar_repeat1,
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
  [anon_sym_PIPE] = {
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
  [anon_sym_COLON] = {
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
  [sym__compound_rule] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym__single_rule] = {
    .visible = false,
    .named = true,
  },
  [sym_or_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_and_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
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
  [aux_sym_token_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_label = 1,
  field_name = 2,
  field_rule = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_label] = "label",
  [field_name] = "name",
  [field_rule] = "rule",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_rule, 2},
  [2] =
    {field_label, 0},
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
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == '|') ADVANCE(9);
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
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == '|') ADVANCE(9);
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
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == '|') ADVANCE(9);
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
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_grammar] = STATE(23),
    [sym_node] = STATE(18),
    [aux_sym_grammar_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__compound_rule] = STATE(3),
    [sym_parenthesized] = STATE(3),
    [sym__single_rule] = STATE(3),
    [sym_or_rule] = STATE(3),
    [sym_and_rule] = STATE(3),
    [sym_rule] = STATE(11),
    [sym_token_ident] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [sym_ident] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__compound_rule] = STATE(3),
    [sym_parenthesized] = STATE(3),
    [sym__single_rule] = STATE(3),
    [sym_or_rule] = STATE(3),
    [sym_and_rule] = STATE(3),
    [sym_rule] = STATE(11),
    [sym_token_ident] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [sym_ident] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__compound_rule] = STATE(3),
    [sym_parenthesized] = STATE(3),
    [sym__single_rule] = STATE(3),
    [sym_or_rule] = STATE(3),
    [sym_and_rule] = STATE(3),
    [sym_rule] = STATE(11),
    [sym_token_ident] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(13),
    [sym_ident] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__compound_rule] = STATE(3),
    [sym_parenthesized] = STATE(3),
    [sym__single_rule] = STATE(3),
    [sym_or_rule] = STATE(3),
    [sym_and_rule] = STATE(3),
    [sym_rule] = STATE(11),
    [sym_token_ident] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(13),
    [sym_ident] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_ident,
    STATE(10), 1,
      sym_token_ident,
    STATE(11), 1,
      sym_rule,
    STATE(2), 5,
      sym__compound_rule,
      sym_parenthesized,
      sym__single_rule,
      sym_or_rule,
      sym_and_rule,
  [26] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_ident,
    STATE(10), 1,
      sym_token_ident,
    STATE(11), 1,
      sym_rule,
    STATE(4), 5,
      sym__compound_rule,
      sym_parenthesized,
      sym__single_rule,
      sym_or_rule,
      sym_and_rule,
  [52] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_ident,
    STATE(10), 1,
      sym_token_ident,
    STATE(11), 1,
      sym_rule,
    STATE(5), 5,
      sym__compound_rule,
      sym_parenthesized,
      sym__single_rule,
      sym_or_rule,
      sym_and_rule,
  [78] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym_ident,
      anon_sym_SQUOTE,
  [95] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym_ident,
      anon_sym_SQUOTE,
  [109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym_ident,
      anon_sym_SQUOTE,
  [139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym_ident,
      anon_sym_SQUOTE,
  [153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym_ident,
      anon_sym_SQUOTE,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym_ident,
      anon_sym_SQUOTE,
  [181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_ident,
    STATE(17), 2,
      sym_node,
      aux_sym_grammar_repeat1,
  [207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_node,
      aux_sym_grammar_repeat1,
  [221] = 4,
    ACTIONS(50), 1,
      aux_sym_token_ident_token1,
    ACTIONS(52), 1,
      anon_sym_SQUOTE2,
    ACTIONS(54), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_token_ident_repeat1,
  [234] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(56), 1,
      aux_sym_token_ident_token1,
    ACTIONS(58), 1,
      anon_sym_SQUOTE2,
    STATE(21), 1,
      aux_sym_token_ident_repeat1,
  [247] = 4,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(60), 1,
      aux_sym_token_ident_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE2,
    STATE(21), 1,
      aux_sym_token_ident_repeat1,
  [260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_EQ,
  [267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 193,
  [SMALL_STATE(18)] = 207,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 234,
  [SMALL_STATE(21)] = 247,
  [SMALL_STATE(22)] = 260,
  [SMALL_STATE(23)] = 267,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_rule, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_rule, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_rule, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_ident, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_ident, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_ident_repeat1, 2), SHIFT_REPEAT(21),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_ident_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
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
