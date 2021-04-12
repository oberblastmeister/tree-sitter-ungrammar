#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

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
  sym_doc_comment = 13,
  sym_grammar = 14,
  sym_node = 15,
  sym__atom_rule = 16,
  sym_labeled = 17,
  sym_modifier = 18,
  sym__rule = 19,
  sym_alt_rule = 20,
  sym_seq_rule = 21,
  sym_token_ident = 22,
  aux_sym_grammar_repeat1 = 23,
  aux_sym_alt_rule_repeat1 = 24,
  aux_sym_seq_rule_repeat1 = 25,
  aux_sym_token_ident_repeat1 = 26,
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
  [sym_doc_comment] = "doc_comment",
  [sym_grammar] = "grammar",
  [sym_node] = "node",
  [sym__atom_rule] = "_atom_rule",
  [sym_labeled] = "labeled",
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
  [sym_doc_comment] = sym_doc_comment,
  [sym_grammar] = sym_grammar,
  [sym_node] = sym_node,
  [sym__atom_rule] = sym__atom_rule,
  [sym_labeled] = sym_labeled,
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
  [sym_doc_comment] = {
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
  [sym_labeled] = {
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
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
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
          lookahead == '_' ||
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
          lookahead == '_' ||
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
          lookahead == '_' ||
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
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
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
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
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
    [sym_doc_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_grammar] = STATE(39),
    [sym_node] = STATE(27),
    [aux_sym_grammar_repeat1] = STATE(27),
    [sym_ident] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_doc_comment] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(9), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [25] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_seq_rule,
    STATE(8), 2,
      sym_labeled,
      sym_token_ident,
    STATE(11), 2,
      sym__atom_rule,
      aux_sym_seq_rule_repeat1,
    STATE(38), 2,
      sym__rule,
      sym_alt_rule,
  [56] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(21), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(9), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [81] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    STATE(5), 2,
      sym__atom_rule,
      aux_sym_seq_rule_repeat1,
    STATE(8), 2,
      sym_labeled,
      sym_token_ident,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [110] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_seq_rule,
    STATE(8), 2,
      sym_labeled,
      sym_token_ident,
    STATE(13), 2,
      sym__atom_rule,
      aux_sym_seq_rule_repeat1,
    STATE(35), 2,
      sym__rule,
      sym_alt_rule,
  [141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_seq_rule,
    STATE(8), 2,
      sym_labeled,
      sym_token_ident,
    STATE(11), 2,
      sym__atom_rule,
      aux_sym_seq_rule_repeat1,
    STATE(37), 2,
      sym__rule,
      sym_alt_rule,
  [172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(9), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    STATE(19), 1,
      sym_modifier,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    STATE(19), 1,
      sym_modifier,
    ACTIONS(37), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [238] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    STATE(5), 2,
      sym__atom_rule,
      aux_sym_seq_rule_repeat1,
    STATE(8), 2,
      sym_labeled,
      sym_token_ident,
  [266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    STATE(17), 1,
      sym_modifier,
    ACTIONS(21), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    ACTIONS(9), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [288] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(42), 1,
      sym_ident,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    STATE(5), 2,
      sym__atom_rule,
      aux_sym_seq_rule_repeat1,
    STATE(8), 2,
      sym_labeled,
      sym_token_ident,
  [316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_seq_rule,
    STATE(8), 2,
      sym_labeled,
      sym_token_ident,
    STATE(11), 2,
      sym__atom_rule,
      aux_sym_seq_rule_repeat1,
  [377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [428] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_seq_rule,
    STATE(8), 2,
      sym_labeled,
      sym_token_ident,
    STATE(13), 2,
      sym__atom_rule,
      aux_sym_seq_rule_repeat1,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_ident,
      anon_sym_SQUOTE,
  [472] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_ident,
    STATE(21), 1,
      sym__atom_rule,
    STATE(12), 2,
      sym_labeled,
      sym_token_ident,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_ident,
  [508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ident,
    STATE(24), 2,
      sym_node,
      aux_sym_grammar_repeat1,
  [525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(68), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_ident,
  [542] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_ident,
  [559] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_node,
      aux_sym_grammar_repeat1,
  [576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      aux_sym_alt_rule_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_ident,
  [593] = 4,
    ACTIONS(79), 1,
      aux_sym_token_ident_token1,
    ACTIONS(81), 1,
      anon_sym_SQUOTE2,
    STATE(31), 1,
      aux_sym_token_ident_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_doc_comment,
  [607] = 4,
    ACTIONS(83), 1,
      aux_sym_token_ident_token1,
    ACTIONS(86), 1,
      anon_sym_SQUOTE2,
    STATE(30), 1,
      aux_sym_token_ident_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_doc_comment,
  [621] = 4,
    ACTIONS(88), 1,
      aux_sym_token_ident_token1,
    ACTIONS(90), 1,
      anon_sym_SQUOTE2,
    STATE(30), 1,
      aux_sym_token_ident_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_doc_comment,
  [635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(33), 1,
      aux_sym_alt_rule_repeat1,
  [651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    STATE(33), 1,
      aux_sym_alt_rule_repeat1,
  [667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(32), 1,
      aux_sym_alt_rule_repeat1,
  [683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_ident,
  [694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(99), 1,
      anon_sym_EQ,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_doc_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 238,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 316,
  [SMALL_STATE(15)] = 333,
  [SMALL_STATE(16)] = 350,
  [SMALL_STATE(17)] = 377,
  [SMALL_STATE(18)] = 394,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 428,
  [SMALL_STATE(21)] = 455,
  [SMALL_STATE(22)] = 472,
  [SMALL_STATE(23)] = 495,
  [SMALL_STATE(24)] = 508,
  [SMALL_STATE(25)] = 525,
  [SMALL_STATE(26)] = 542,
  [SMALL_STATE(27)] = 559,
  [SMALL_STATE(28)] = 576,
  [SMALL_STATE(29)] = 593,
  [SMALL_STATE(30)] = 607,
  [SMALL_STATE(31)] = 621,
  [SMALL_STATE(32)] = 635,
  [SMALL_STATE(33)] = 651,
  [SMALL_STATE(34)] = 667,
  [SMALL_STATE(35)] = 683,
  [SMALL_STATE(36)] = 694,
  [SMALL_STATE(37)] = 704,
  [SMALL_STATE(38)] = 714,
  [SMALL_STATE(39)] = 724,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atom_rule, 1), SHIFT(14),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2), SHIFT_REPEAT(7),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_rule_repeat1, 2), SHIFT_REPEAT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 3),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atom_rule, 3), SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_rule, 1),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_seq_rule, 1), SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_ident, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_ident, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_rule, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled, 3, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(36),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2), SHIFT_REPEAT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt_rule, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_ident_repeat1, 2), SHIFT_REPEAT(30),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_ident_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alt_rule_repeat1, 2), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
