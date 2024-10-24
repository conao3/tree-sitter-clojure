#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 34
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_POUND = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_POUND_LBRACE = 8,
  sym__symbol = 9,
  anon_sym_DOT = 10,
  anon_sym_SLASH = 11,
  sym_string = 12,
  aux_sym_number_token1 = 13,
  anon_sym_POUND_POUNDInf = 14,
  anon_sym_POUND_POUND_DASHInf = 15,
  anon_sym_POUND_POUNDNaN = 16,
  anon_sym_BSLASHnewline = 17,
  anon_sym_BSLASHspace = 18,
  anon_sym_BSLASHtab = 19,
  anon_sym_BSLASHformfeed = 20,
  anon_sym_BSLASHbackspace = 21,
  anon_sym_BSLASHreturn = 22,
  aux_sym_character_token1 = 23,
  aux_sym_character_token2 = 24,
  aux_sym_character_token3 = 25,
  sym_nil = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  aux_sym_keyword_token1 = 29,
  sym_comment = 30,
  sym_source = 31,
  sym__form = 32,
  sym_list = 33,
  sym_vector = 34,
  sym_map = 35,
  sym_set = 36,
  sym_symbol = 37,
  sym__namespace = 38,
  sym_number = 39,
  sym_character = 40,
  sym_boolean = 41,
  sym_keyword = 42,
  aux_sym_source_repeat1 = 43,
  aux_sym_map_repeat1 = 44,
  aux_sym__namespace_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND_LBRACE] = "#{",
  [sym__symbol] = "_symbol",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [sym_string] = "string",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_POUND_POUNDInf] = "##Inf",
  [anon_sym_POUND_POUND_DASHInf] = "##-Inf",
  [anon_sym_POUND_POUNDNaN] = "##NaN",
  [anon_sym_BSLASHnewline] = "\\newline",
  [anon_sym_BSLASHspace] = "\\space",
  [anon_sym_BSLASHtab] = "\\tab",
  [anon_sym_BSLASHformfeed] = "\\formfeed",
  [anon_sym_BSLASHbackspace] = "\\backspace",
  [anon_sym_BSLASHreturn] = "\\return",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_character_token2] = "character_token2",
  [aux_sym_character_token3] = "character_token3",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_keyword_token1] = "keyword_token1",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__form] = "_form",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_map] = "map",
  [sym_set] = "set",
  [sym_symbol] = "symbol",
  [sym__namespace] = "_namespace",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym_boolean] = "boolean",
  [sym_keyword] = "keyword",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym__namespace_repeat1] = "_namespace_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [sym__symbol] = sym__symbol,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_string] = sym_string,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_POUND_POUNDInf] = anon_sym_POUND_POUNDInf,
  [anon_sym_POUND_POUND_DASHInf] = anon_sym_POUND_POUND_DASHInf,
  [anon_sym_POUND_POUNDNaN] = anon_sym_POUND_POUNDNaN,
  [anon_sym_BSLASHnewline] = anon_sym_BSLASHnewline,
  [anon_sym_BSLASHspace] = anon_sym_BSLASHspace,
  [anon_sym_BSLASHtab] = anon_sym_BSLASHtab,
  [anon_sym_BSLASHformfeed] = anon_sym_BSLASHformfeed,
  [anon_sym_BSLASHbackspace] = anon_sym_BSLASHbackspace,
  [anon_sym_BSLASHreturn] = anon_sym_BSLASHreturn,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_character_token2] = aux_sym_character_token2,
  [aux_sym_character_token3] = aux_sym_character_token3,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__form] = sym__form,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_map] = sym_map,
  [sym_set] = sym_set,
  [sym_symbol] = sym_symbol,
  [sym__namespace] = sym__namespace,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [sym_boolean] = sym_boolean,
  [sym_keyword] = sym_keyword,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym__namespace_repeat1] = aux_sym__namespace_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUNDInf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_DASHInf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUNDNaN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHnewline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHtab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHformfeed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHbackspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHreturn] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__namespace] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__namespace_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static TSCharacterRange sym__symbol_character_set_1[] = {
  {'!', '!'}, {'\'', '\''}, {'*', '+'}, {'-', '-'}, {'0', '9'}, {'<', '?'}, {'A', 'Z'}, {'_', '_'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '"', 1,
        '#', 57,
        '(', 53,
        ')', 54,
        '.', 85,
        '/', 86,
        '0', 3,
        '2', 90,
        '3', 89,
        ':', 124,
        ';', 125,
        '[', 55,
        '\\', 11,
        ']', 56,
        'f', 69,
        'n', 72,
        't', 75,
        '{', 58,
        '}', 59,
        '+', 68,
        '-', 68,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(0);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(5);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        'b', 112,
        'f', 116,
        'n', 114,
        'o', 118,
        'r', 115,
        's', 117,
        't', 113,
        'u', 119,
      );
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(96);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '{') ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '6') ADVANCE(63);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '3') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'a') ADVANCE(73);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'e') ADVANCE(121);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'e') ADVANCE(122);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'i') ADVANCE(74);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'l') ADVANCE(76);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'l') ADVANCE(120);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'r') ADVANCE(77);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 's') ADVANCE(71);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'u') ADVANCE(70);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(84);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(78);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__symbol);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__symbol);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '6') ADVANCE(91);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(4);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'M') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'M') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(96);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'M' ||
          lookahead == 'N') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POUND_POUNDInf);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_DASHInf);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_POUND_POUNDNaN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BSLASHnewline);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BSLASHspace);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BSLASHtab);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BSLASHformfeed);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BSLASHbackspace);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BSLASHreturn);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_character_token2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_character_token3);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_nil);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_true);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_false);
      if (set_contains(sym__symbol_character_set_1, 9, lookahead)) ADVANCE(84);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ':') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [sym__symbol] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_POUND_POUNDInf] = ACTIONS(1),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(1),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(1),
    [anon_sym_BSLASHnewline] = ACTIONS(1),
    [anon_sym_BSLASHspace] = ACTIONS(1),
    [anon_sym_BSLASHtab] = ACTIONS(1),
    [anon_sym_BSLASHformfeed] = ACTIONS(1),
    [anon_sym_BSLASHbackspace] = ACTIONS(1),
    [anon_sym_BSLASHreturn] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [aux_sym_character_token2] = ACTIONS(1),
    [aux_sym_character_token3] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(39),
    [sym__form] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_map] = STATE(7),
    [sym_set] = STATE(7),
    [sym_symbol] = STATE(7),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(7),
    [sym_character] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_keyword] = STATE(7),
    [aux_sym_source_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_set] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(46),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [sym__symbol] = ACTIONS(52),
    [sym_string] = ACTIONS(55),
    [aux_sym_number_token1] = ACTIONS(58),
    [anon_sym_POUND_POUNDInf] = ACTIONS(61),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(61),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(61),
    [anon_sym_BSLASHnewline] = ACTIONS(64),
    [anon_sym_BSLASHspace] = ACTIONS(64),
    [anon_sym_BSLASHtab] = ACTIONS(64),
    [anon_sym_BSLASHformfeed] = ACTIONS(64),
    [anon_sym_BSLASHbackspace] = ACTIONS(64),
    [anon_sym_BSLASHreturn] = ACTIONS(64),
    [aux_sym_character_token1] = ACTIONS(64),
    [aux_sym_character_token2] = ACTIONS(64),
    [aux_sym_character_token3] = ACTIONS(67),
    [sym_nil] = ACTIONS(70),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [aux_sym_keyword_token1] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__form] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_map] = STATE(9),
    [sym_set] = STATE(9),
    [sym_symbol] = STATE(9),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(9),
    [sym_character] = STATE(9),
    [sym_boolean] = STATE(9),
    [sym_keyword] = STATE(9),
    [aux_sym_source_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(81),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__form] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_map] = STATE(8),
    [sym_set] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(8),
    [sym_character] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_keyword] = STATE(8),
    [aux_sym_source_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(87),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__form] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_map] = STATE(15),
    [sym_set] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(15),
    [sym_character] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_keyword] = STATE(15),
    [aux_sym_map_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(93),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__form] = STATE(11),
    [sym_list] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_map] = STATE(11),
    [sym_set] = STATE(11),
    [sym_symbol] = STATE(11),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(11),
    [sym_character] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_keyword] = STATE(11),
    [aux_sym_source_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(99),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_set] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(105),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_set] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(105),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_set] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(105),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__form] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_map] = STATE(15),
    [sym_set] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(15),
    [sym_character] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_keyword] = STATE(15),
    [aux_sym_map_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [sym__symbol] = ACTIONS(130),
    [sym_string] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(136),
    [anon_sym_POUND_POUNDInf] = ACTIONS(139),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(139),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(139),
    [anon_sym_BSLASHnewline] = ACTIONS(142),
    [anon_sym_BSLASHspace] = ACTIONS(142),
    [anon_sym_BSLASHtab] = ACTIONS(142),
    [anon_sym_BSLASHformfeed] = ACTIONS(142),
    [anon_sym_BSLASHbackspace] = ACTIONS(142),
    [anon_sym_BSLASHreturn] = ACTIONS(142),
    [aux_sym_character_token1] = ACTIONS(142),
    [aux_sym_character_token2] = ACTIONS(142),
    [aux_sym_character_token3] = ACTIONS(145),
    [sym_nil] = ACTIONS(148),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [aux_sym_keyword_token1] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_map] = STATE(2),
    [sym_set] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_keyword] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(105),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__form] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_map] = STATE(15),
    [sym_set] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(15),
    [sym_character] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_keyword] = STATE(15),
    [aux_sym_map_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(93),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__form] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_map] = STATE(15),
    [sym_set] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(15),
    [sym_character] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_keyword] = STATE(15),
    [aux_sym_map_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(93),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__form] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_map] = STATE(15),
    [sym_set] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(15),
    [sym_character] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_keyword] = STATE(15),
    [aux_sym_map_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(93),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__form] = STATE(33),
    [sym_list] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_map] = STATE(33),
    [sym_set] = STATE(33),
    [sym_symbol] = STATE(33),
    [sym__namespace] = STATE(43),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_keyword] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [sym__symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(165),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_POUND_POUNDInf] = ACTIONS(23),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(23),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(23),
    [anon_sym_BSLASHnewline] = ACTIONS(25),
    [anon_sym_BSLASHspace] = ACTIONS(25),
    [anon_sym_BSLASHtab] = ACTIONS(25),
    [anon_sym_BSLASHformfeed] = ACTIONS(25),
    [anon_sym_BSLASHbackspace] = ACTIONS(25),
    [anon_sym_BSLASHreturn] = ACTIONS(25),
    [aux_sym_character_token1] = ACTIONS(25),
    [aux_sym_character_token2] = ACTIONS(25),
    [aux_sym_character_token3] = ACTIONS(27),
    [sym_nil] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__namespace_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_POUND_LBRACE] = ACTIONS(169),
    [sym__symbol] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(175),
    [sym_string] = ACTIONS(169),
    [aux_sym_number_token1] = ACTIONS(171),
    [anon_sym_POUND_POUNDInf] = ACTIONS(169),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(169),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(169),
    [anon_sym_BSLASHnewline] = ACTIONS(169),
    [anon_sym_BSLASHspace] = ACTIONS(169),
    [anon_sym_BSLASHtab] = ACTIONS(169),
    [anon_sym_BSLASHformfeed] = ACTIONS(169),
    [anon_sym_BSLASHbackspace] = ACTIONS(169),
    [anon_sym_BSLASHreturn] = ACTIONS(169),
    [aux_sym_character_token1] = ACTIONS(169),
    [aux_sym_character_token2] = ACTIONS(169),
    [aux_sym_character_token3] = ACTIONS(171),
    [sym_nil] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [aux_sym_keyword_token1] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__namespace_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_POUND_LBRACE] = ACTIONS(177),
    [sym__symbol] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(175),
    [sym_string] = ACTIONS(177),
    [aux_sym_number_token1] = ACTIONS(179),
    [anon_sym_POUND_POUNDInf] = ACTIONS(177),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(177),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(177),
    [anon_sym_BSLASHnewline] = ACTIONS(177),
    [anon_sym_BSLASHspace] = ACTIONS(177),
    [anon_sym_BSLASHtab] = ACTIONS(177),
    [anon_sym_BSLASHformfeed] = ACTIONS(177),
    [anon_sym_BSLASHbackspace] = ACTIONS(177),
    [anon_sym_BSLASHreturn] = ACTIONS(177),
    [aux_sym_character_token1] = ACTIONS(177),
    [aux_sym_character_token2] = ACTIONS(177),
    [aux_sym_character_token3] = ACTIONS(179),
    [sym_nil] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [aux_sym_keyword_token1] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_POUND_LBRACE] = ACTIONS(181),
    [sym__symbol] = ACTIONS(183),
    [sym_string] = ACTIONS(181),
    [aux_sym_number_token1] = ACTIONS(183),
    [anon_sym_POUND_POUNDInf] = ACTIONS(181),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(181),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(181),
    [anon_sym_BSLASHnewline] = ACTIONS(181),
    [anon_sym_BSLASHspace] = ACTIONS(181),
    [anon_sym_BSLASHtab] = ACTIONS(181),
    [anon_sym_BSLASHformfeed] = ACTIONS(181),
    [anon_sym_BSLASHbackspace] = ACTIONS(181),
    [anon_sym_BSLASHreturn] = ACTIONS(181),
    [aux_sym_character_token1] = ACTIONS(181),
    [aux_sym_character_token2] = ACTIONS(181),
    [aux_sym_character_token3] = ACTIONS(183),
    [sym_nil] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [aux_sym_keyword_token1] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_POUND_LBRACE] = ACTIONS(185),
    [sym__symbol] = ACTIONS(187),
    [sym_string] = ACTIONS(185),
    [aux_sym_number_token1] = ACTIONS(187),
    [anon_sym_POUND_POUNDInf] = ACTIONS(185),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(185),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(185),
    [anon_sym_BSLASHnewline] = ACTIONS(185),
    [anon_sym_BSLASHspace] = ACTIONS(185),
    [anon_sym_BSLASHtab] = ACTIONS(185),
    [anon_sym_BSLASHformfeed] = ACTIONS(185),
    [anon_sym_BSLASHbackspace] = ACTIONS(185),
    [anon_sym_BSLASHreturn] = ACTIONS(185),
    [aux_sym_character_token1] = ACTIONS(185),
    [aux_sym_character_token2] = ACTIONS(185),
    [aux_sym_character_token3] = ACTIONS(187),
    [sym_nil] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [aux_sym_keyword_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_POUND_LBRACE] = ACTIONS(189),
    [sym__symbol] = ACTIONS(191),
    [sym_string] = ACTIONS(189),
    [aux_sym_number_token1] = ACTIONS(191),
    [anon_sym_POUND_POUNDInf] = ACTIONS(189),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(189),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(189),
    [anon_sym_BSLASHnewline] = ACTIONS(189),
    [anon_sym_BSLASHspace] = ACTIONS(189),
    [anon_sym_BSLASHtab] = ACTIONS(189),
    [anon_sym_BSLASHformfeed] = ACTIONS(189),
    [anon_sym_BSLASHbackspace] = ACTIONS(189),
    [anon_sym_BSLASHreturn] = ACTIONS(189),
    [aux_sym_character_token1] = ACTIONS(189),
    [aux_sym_character_token2] = ACTIONS(189),
    [aux_sym_character_token3] = ACTIONS(191),
    [sym_nil] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [aux_sym_keyword_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_POUND_LBRACE] = ACTIONS(193),
    [sym__symbol] = ACTIONS(195),
    [sym_string] = ACTIONS(193),
    [aux_sym_number_token1] = ACTIONS(195),
    [anon_sym_POUND_POUNDInf] = ACTIONS(193),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(193),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(193),
    [anon_sym_BSLASHnewline] = ACTIONS(193),
    [anon_sym_BSLASHspace] = ACTIONS(193),
    [anon_sym_BSLASHtab] = ACTIONS(193),
    [anon_sym_BSLASHformfeed] = ACTIONS(193),
    [anon_sym_BSLASHbackspace] = ACTIONS(193),
    [anon_sym_BSLASHreturn] = ACTIONS(193),
    [aux_sym_character_token1] = ACTIONS(193),
    [aux_sym_character_token2] = ACTIONS(193),
    [aux_sym_character_token3] = ACTIONS(195),
    [sym_nil] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [aux_sym_keyword_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_POUND_LBRACE] = ACTIONS(197),
    [sym__symbol] = ACTIONS(199),
    [sym_string] = ACTIONS(197),
    [aux_sym_number_token1] = ACTIONS(199),
    [anon_sym_POUND_POUNDInf] = ACTIONS(197),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(197),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(197),
    [anon_sym_BSLASHnewline] = ACTIONS(197),
    [anon_sym_BSLASHspace] = ACTIONS(197),
    [anon_sym_BSLASHtab] = ACTIONS(197),
    [anon_sym_BSLASHformfeed] = ACTIONS(197),
    [anon_sym_BSLASHbackspace] = ACTIONS(197),
    [anon_sym_BSLASHreturn] = ACTIONS(197),
    [aux_sym_character_token1] = ACTIONS(197),
    [aux_sym_character_token2] = ACTIONS(197),
    [aux_sym_character_token3] = ACTIONS(199),
    [sym_nil] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(199),
    [aux_sym_keyword_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_POUND_LBRACE] = ACTIONS(201),
    [sym__symbol] = ACTIONS(203),
    [sym_string] = ACTIONS(201),
    [aux_sym_number_token1] = ACTIONS(203),
    [anon_sym_POUND_POUNDInf] = ACTIONS(201),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(201),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(201),
    [anon_sym_BSLASHnewline] = ACTIONS(201),
    [anon_sym_BSLASHspace] = ACTIONS(201),
    [anon_sym_BSLASHtab] = ACTIONS(201),
    [anon_sym_BSLASHformfeed] = ACTIONS(201),
    [anon_sym_BSLASHbackspace] = ACTIONS(201),
    [anon_sym_BSLASHreturn] = ACTIONS(201),
    [aux_sym_character_token1] = ACTIONS(201),
    [aux_sym_character_token2] = ACTIONS(201),
    [aux_sym_character_token3] = ACTIONS(203),
    [sym_nil] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(203),
    [aux_sym_keyword_token1] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_POUND_LBRACE] = ACTIONS(205),
    [sym__symbol] = ACTIONS(207),
    [sym_string] = ACTIONS(205),
    [aux_sym_number_token1] = ACTIONS(207),
    [anon_sym_POUND_POUNDInf] = ACTIONS(205),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(205),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(205),
    [anon_sym_BSLASHnewline] = ACTIONS(205),
    [anon_sym_BSLASHspace] = ACTIONS(205),
    [anon_sym_BSLASHtab] = ACTIONS(205),
    [anon_sym_BSLASHformfeed] = ACTIONS(205),
    [anon_sym_BSLASHbackspace] = ACTIONS(205),
    [anon_sym_BSLASHreturn] = ACTIONS(205),
    [aux_sym_character_token1] = ACTIONS(205),
    [aux_sym_character_token2] = ACTIONS(205),
    [aux_sym_character_token3] = ACTIONS(207),
    [sym_nil] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [aux_sym_keyword_token1] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_POUND_LBRACE] = ACTIONS(209),
    [sym__symbol] = ACTIONS(211),
    [sym_string] = ACTIONS(209),
    [aux_sym_number_token1] = ACTIONS(211),
    [anon_sym_POUND_POUNDInf] = ACTIONS(209),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(209),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(209),
    [anon_sym_BSLASHnewline] = ACTIONS(209),
    [anon_sym_BSLASHspace] = ACTIONS(209),
    [anon_sym_BSLASHtab] = ACTIONS(209),
    [anon_sym_BSLASHformfeed] = ACTIONS(209),
    [anon_sym_BSLASHbackspace] = ACTIONS(209),
    [anon_sym_BSLASHreturn] = ACTIONS(209),
    [aux_sym_character_token1] = ACTIONS(209),
    [aux_sym_character_token2] = ACTIONS(209),
    [aux_sym_character_token3] = ACTIONS(211),
    [sym_nil] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [aux_sym_keyword_token1] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_POUND_LBRACE] = ACTIONS(213),
    [sym__symbol] = ACTIONS(215),
    [sym_string] = ACTIONS(213),
    [aux_sym_number_token1] = ACTIONS(215),
    [anon_sym_POUND_POUNDInf] = ACTIONS(213),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(213),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(213),
    [anon_sym_BSLASHnewline] = ACTIONS(213),
    [anon_sym_BSLASHspace] = ACTIONS(213),
    [anon_sym_BSLASHtab] = ACTIONS(213),
    [anon_sym_BSLASHformfeed] = ACTIONS(213),
    [anon_sym_BSLASHbackspace] = ACTIONS(213),
    [anon_sym_BSLASHreturn] = ACTIONS(213),
    [aux_sym_character_token1] = ACTIONS(213),
    [aux_sym_character_token2] = ACTIONS(213),
    [aux_sym_character_token3] = ACTIONS(215),
    [sym_nil] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [aux_sym_keyword_token1] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_POUND_LBRACE] = ACTIONS(217),
    [sym__symbol] = ACTIONS(219),
    [sym_string] = ACTIONS(217),
    [aux_sym_number_token1] = ACTIONS(219),
    [anon_sym_POUND_POUNDInf] = ACTIONS(217),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(217),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(217),
    [anon_sym_BSLASHnewline] = ACTIONS(217),
    [anon_sym_BSLASHspace] = ACTIONS(217),
    [anon_sym_BSLASHtab] = ACTIONS(217),
    [anon_sym_BSLASHformfeed] = ACTIONS(217),
    [anon_sym_BSLASHbackspace] = ACTIONS(217),
    [anon_sym_BSLASHreturn] = ACTIONS(217),
    [aux_sym_character_token1] = ACTIONS(217),
    [aux_sym_character_token2] = ACTIONS(217),
    [aux_sym_character_token3] = ACTIONS(219),
    [sym_nil] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [aux_sym_keyword_token1] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_POUND_LBRACE] = ACTIONS(221),
    [sym__symbol] = ACTIONS(223),
    [sym_string] = ACTIONS(221),
    [aux_sym_number_token1] = ACTIONS(223),
    [anon_sym_POUND_POUNDInf] = ACTIONS(221),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(221),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(221),
    [anon_sym_BSLASHnewline] = ACTIONS(221),
    [anon_sym_BSLASHspace] = ACTIONS(221),
    [anon_sym_BSLASHtab] = ACTIONS(221),
    [anon_sym_BSLASHformfeed] = ACTIONS(221),
    [anon_sym_BSLASHbackspace] = ACTIONS(221),
    [anon_sym_BSLASHreturn] = ACTIONS(221),
    [aux_sym_character_token1] = ACTIONS(221),
    [aux_sym_character_token2] = ACTIONS(221),
    [aux_sym_character_token3] = ACTIONS(223),
    [sym_nil] = ACTIONS(223),
    [anon_sym_true] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(223),
    [aux_sym_keyword_token1] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_POUND_LBRACE] = ACTIONS(225),
    [sym__symbol] = ACTIONS(227),
    [sym_string] = ACTIONS(225),
    [aux_sym_number_token1] = ACTIONS(227),
    [anon_sym_POUND_POUNDInf] = ACTIONS(225),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(225),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(225),
    [anon_sym_BSLASHnewline] = ACTIONS(225),
    [anon_sym_BSLASHspace] = ACTIONS(225),
    [anon_sym_BSLASHtab] = ACTIONS(225),
    [anon_sym_BSLASHformfeed] = ACTIONS(225),
    [anon_sym_BSLASHbackspace] = ACTIONS(225),
    [anon_sym_BSLASHreturn] = ACTIONS(225),
    [aux_sym_character_token1] = ACTIONS(225),
    [aux_sym_character_token2] = ACTIONS(225),
    [aux_sym_character_token3] = ACTIONS(227),
    [sym_nil] = ACTIONS(227),
    [anon_sym_true] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(227),
    [aux_sym_keyword_token1] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_POUND_LBRACE] = ACTIONS(229),
    [sym__symbol] = ACTIONS(231),
    [sym_string] = ACTIONS(229),
    [aux_sym_number_token1] = ACTIONS(231),
    [anon_sym_POUND_POUNDInf] = ACTIONS(229),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(229),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(229),
    [anon_sym_BSLASHnewline] = ACTIONS(229),
    [anon_sym_BSLASHspace] = ACTIONS(229),
    [anon_sym_BSLASHtab] = ACTIONS(229),
    [anon_sym_BSLASHformfeed] = ACTIONS(229),
    [anon_sym_BSLASHbackspace] = ACTIONS(229),
    [anon_sym_BSLASHreturn] = ACTIONS(229),
    [aux_sym_character_token1] = ACTIONS(229),
    [aux_sym_character_token2] = ACTIONS(229),
    [aux_sym_character_token3] = ACTIONS(231),
    [sym_nil] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(231),
    [aux_sym_keyword_token1] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_POUND_LBRACE] = ACTIONS(233),
    [sym__symbol] = ACTIONS(235),
    [sym_string] = ACTIONS(233),
    [aux_sym_number_token1] = ACTIONS(235),
    [anon_sym_POUND_POUNDInf] = ACTIONS(233),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(233),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(233),
    [anon_sym_BSLASHnewline] = ACTIONS(233),
    [anon_sym_BSLASHspace] = ACTIONS(233),
    [anon_sym_BSLASHtab] = ACTIONS(233),
    [anon_sym_BSLASHformfeed] = ACTIONS(233),
    [anon_sym_BSLASHbackspace] = ACTIONS(233),
    [anon_sym_BSLASHreturn] = ACTIONS(233),
    [aux_sym_character_token1] = ACTIONS(233),
    [aux_sym_character_token2] = ACTIONS(233),
    [aux_sym_character_token3] = ACTIONS(235),
    [sym_nil] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(235),
    [aux_sym_keyword_token1] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_POUND_LBRACE] = ACTIONS(237),
    [sym__symbol] = ACTIONS(239),
    [sym_string] = ACTIONS(237),
    [aux_sym_number_token1] = ACTIONS(239),
    [anon_sym_POUND_POUNDInf] = ACTIONS(237),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(237),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(237),
    [anon_sym_BSLASHnewline] = ACTIONS(237),
    [anon_sym_BSLASHspace] = ACTIONS(237),
    [anon_sym_BSLASHtab] = ACTIONS(237),
    [anon_sym_BSLASHformfeed] = ACTIONS(237),
    [anon_sym_BSLASHbackspace] = ACTIONS(237),
    [anon_sym_BSLASHreturn] = ACTIONS(237),
    [aux_sym_character_token1] = ACTIONS(237),
    [aux_sym_character_token2] = ACTIONS(237),
    [aux_sym_character_token3] = ACTIONS(239),
    [sym_nil] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(239),
    [aux_sym_keyword_token1] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(125),
    [sym__symbol] = ACTIONS(241),
    [sym_string] = ACTIONS(125),
    [aux_sym_number_token1] = ACTIONS(241),
    [anon_sym_POUND_POUNDInf] = ACTIONS(125),
    [anon_sym_POUND_POUND_DASHInf] = ACTIONS(125),
    [anon_sym_POUND_POUNDNaN] = ACTIONS(125),
    [anon_sym_BSLASHnewline] = ACTIONS(125),
    [anon_sym_BSLASHspace] = ACTIONS(125),
    [anon_sym_BSLASHtab] = ACTIONS(125),
    [anon_sym_BSLASHformfeed] = ACTIONS(125),
    [anon_sym_BSLASHbackspace] = ACTIONS(125),
    [anon_sym_BSLASHreturn] = ACTIONS(125),
    [aux_sym_character_token1] = ACTIONS(125),
    [aux_sym_character_token2] = ACTIONS(125),
    [aux_sym_character_token3] = ACTIONS(241),
    [sym_nil] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(241),
    [aux_sym_keyword_token1] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_SLASH,
    STATE(35), 1,
      aux_sym__namespace_repeat1,
  [13] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(250), 1,
      anon_sym_SLASH,
    STATE(35), 1,
      aux_sym__namespace_repeat1,
  [26] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym__symbol,
    STATE(42), 1,
      sym__namespace,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_keyword_token1,
    STATE(44), 1,
      sym_keyword,
  [46] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_DOT,
      anon_sym_SLASH,
  [54] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [61] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__symbol,
  [68] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__symbol,
  [75] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__symbol,
  [82] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__symbol,
  [89] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
  [96] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(34)] = 0,
  [SMALL_STATE(35)] = 13,
  [SMALL_STATE(36)] = 26,
  [SMALL_STATE(37)] = 36,
  [SMALL_STATE(38)] = 46,
  [SMALL_STATE(39)] = 54,
  [SMALL_STATE(40)] = 61,
  [SMALL_STATE(41)] = 68,
  [SMALL_STATE(42)] = 75,
  [SMALL_STATE(43)] = 82,
  [SMALL_STATE(44)] = 89,
  [SMALL_STATE(45)] = 96,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__namespace_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__namespace_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__namespace, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__namespace, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_clojure(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
