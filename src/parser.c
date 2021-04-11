#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

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
  sym_modifier = 16,
  sym__rule = 17,
  sym_alt_rule = 18,
  sym_seq_rule = 19,
  sym_token_ident = 20,
  aux_sym_grammar_repeat1 = 21,
  aux_sym_alt_rule_repeat1 = 22,
  aux_sym_seq_rule_repeat1 = 23,
  aux_sym_token_ident_repeat1 = 24,
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
  [sym_modifier] = "modifier",
  [sym__rule] = "_rule",
  [sym_alt_rule] = "alt_rule",
  [sym_seq_rule] = "seq_rule",
  [sym_token_ident] = "token_ident",
  [aux_sym_grammar_repeat1] = "grammar_repeat1",
  [aux_sym_alt_rule_repeat1] = "alt_rule_repeat1",
  [aux_sym_seq_rule_repeat1] = "seq_rule_repeat1",
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
  [sym_modifier] = sym_modifier,
  [sym__rule] = sym__rule,
  [sym_alt_rule] = sym_alt_rule,
  [sym_seq_rule] = sym_seq_rule,
  [sym_token_ident] = sym_token_ident,
  [aux_sym_grammar_repeat1] = aux_sym_grammar_repeat1,
  [aux_sym_alt_rule_repeat1] = aux_sym_alt_rule_repeat1,
  [aux_sym_seq_rule_repeat1] = aux_sym_seq_rule_repeat1,
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
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym_alt_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_seq_rule] = {
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
  [aux_sym_alt_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seq_rule_repeat1] = {
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0, .inherited = true},
  [1] =
    {field_name, 0},
    {field_rule, 2},
  [3] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [5] =
    {field_label, 0},
    {field_label, 2, .inherited = true},
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
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
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
    [sym_grammar] = STATE(43),
    [sym_node] = STATE(32),
    [aux_sym_grammar_repeat1] = STATE(32),
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
    ACTIONS(13), 1,
      anon_sym_COLON,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(15), 2,
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
    ACTIONS(15), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(7), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [63] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_ident,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_token_ident,
    STATE(20), 1,
      aux_sym_seq_rule_repeat1,
    STATE(24), 1,
      sym__atom_rule,
    STATE(38), 1,
      sym_seq_rule,
    STATE(42), 2,
      sym__rule,
      sym_alt_rule,
  [92] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_ident,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_token_ident,
    STATE(15), 1,
      aux_sym_seq_rule_repeat1,
    STATE(24), 1,
      sym__atom_rule,
    STATE(30), 1,
      sym_seq_rule,
    STATE(39), 2,
      sym__rule,
      sym_alt_rule,
  [121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_modifier,
    ACTIONS(26), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(24), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [140] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_ident,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_token_ident,
    STATE(20), 1,
      aux_sym_seq_rule_repeat1,
    STATE(24), 1,
      sym__atom_rule,
    STATE(38), 1,
      sym_seq_rule,
    STATE(41), 2,
      sym__rule,
      sym_alt_rule,
  [169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_modifier,
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
  [188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_modifier,
    ACTIONS(11), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(24), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_modifier,
    ACTIONS(11), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [226] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_ident,
    ACTIONS(42), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym_seq_rule_repeat1,
    STATE(13), 1,
      sym_token_ident,
    STATE(24), 1,
      sym__atom_rule,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [253] = 4,
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
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [286] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_ident,
    STATE(12), 1,
      aux_sym_seq_rule_repeat1,
    STATE(13), 1,
      sym_token_ident,
    STATE(24), 1,
      sym__atom_rule,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [340] = 2,
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
  [354] = 2,
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
  [368] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_ident,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym_seq_rule_repeat1,
    STATE(13), 1,
      sym_token_ident,
    STATE(24), 1,
      sym__atom_rule,
    ACTIONS(47), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [408] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_ident,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_token_ident,
    STATE(15), 1,
      aux_sym_seq_rule_repeat1,
    STATE(24), 1,
      sym__atom_rule,
    STATE(28), 1,
      sym_seq_rule,
  [433] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_ident,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_token_ident,
    STATE(20), 1,
      aux_sym_seq_rule_repeat1,
    STATE(24), 1,
      sym__atom_rule,
    STATE(28), 1,
      sym_seq_rule,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [470] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_ident,
    STATE(4), 1,
      sym_token_ident,
    STATE(10), 1,
      sym__atom_rule,
  [489] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_ident,
    STATE(4), 1,
      sym_token_ident,
    STATE(7), 1,
      sym__atom_rule,
  [508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_ident,
  [522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
  [532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_ident,
  [546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_ident,
  [560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_ident,
    STATE(31), 2,
      sym_node,
      aux_sym_grammar_repeat1,
  [574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_node,
      aux_sym_grammar_repeat1,
  [588] = 4,
    ACTIONS(86), 1,
      aux_sym_token_ident_token1,
    ACTIONS(89), 1,
      anon_sym_SQUOTE2,
    ACTIONS(91), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_token_ident_repeat1,
  [601] = 4,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_token_ident_token1,
    ACTIONS(95), 1,
      anon_sym_SQUOTE2,
    STATE(33), 1,
      aux_sym_token_ident_repeat1,
  [614] = 4,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_token_ident_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE2,
    STATE(34), 1,
      aux_sym_token_ident_repeat1,
  [627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      aux_sym_alt_rule_repeat1,
  [640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      aux_sym_alt_rule_repeat1,
  [653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      aux_sym_alt_rule_repeat1,
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      sym_ident,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_EQ,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
  [688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 226,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 272,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 312,
  [SMALL_STATE(17)] = 326,
  [SMALL_STATE(18)] = 340,
  [SMALL_STATE(19)] = 354,
  [SMALL_STATE(20)] = 368,
  [SMALL_STATE(21)] = 394,
  [SMALL_STATE(22)] = 408,
  [SMALL_STATE(23)] = 433,
  [SMALL_STATE(24)] = 458,
  [SMALL_STATE(25)] = 470,
  [SMALL_STATE(26)] = 489,
  [SMALL_STATE(27)] = 508,
  [SMALL_STATE(28)] = 522,
  [SMALL_STATE(29)] = 532,
  [SMALL_STATE(30)] = 546,
  [SMALL_STATE(31)] = 560,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 588,
  [SMALL_STATE(34)] = 601,
  [SMALL_STATE(35)] = 614,
  [SMALL_STATE(36)] = 627,
  [SMALL_STATE(37)] = 640,
  [SMALL_STATE(38)] = 653,
  [SMALL_STATE(39)] = 666,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 681,
  [SMALL_STATE(42)] = 688,
  [SMALL_STATE(43)] = 695,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atom_rule, 1), SHIFT(16),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 3, .production_id = 4),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atom_rule, 3, .production_id = 4), SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atom_rule, 3), SHIFT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2, .production_id = 3),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2, .production_id = 3), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2, .production_id = 3), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2, .production_id = 3), SHIFT_REPEAT(35),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 4, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_rule, 1, .production_id = 1),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seq_rule, 1, .production_id = 1), SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_ident, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_ident, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 1, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_rule, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(40),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_ident_repeat1, 2), SHIFT_REPEAT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_ident_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2), SHIFT_REPEAT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
