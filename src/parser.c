#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_shift = 1,
  anon_sym_ctrl = 2,
  anon_sym_control = 3,
  anon_sym_alt = 4,
  anon_sym_opt = 5,
  anon_sym_option = 6,
  anon_sym_cmd = 7,
  anon_sym_command = 8,
  anon_sym_hyper = 9,
  sym_modifier_operator = 10,
  sym_keysym_operator = 11,
  aux_sym_keysym_token1 = 12,
  aux_sym_keysym_token2 = 13,
  aux_sym_keysym_token3 = 14,
  aux_sym_keysym_token4 = 15,
  aux_sym_keysym_token5 = 16,
  aux_sym_keysym_token6 = 17,
  aux_sym_keysym_token7 = 18,
  aux_sym_keysym_token8 = 19,
  aux_sym_keysym_token9 = 20,
  aux_sym_keysym_token10 = 21,
  aux_sym_keysym_token11 = 22,
  aux_sym_keysym_token12 = 23,
  aux_sym_keysym_token13 = 24,
  aux_sym_keysym_token14 = 25,
  aux_sym_keysym_token15 = 26,
  aux_sym_keysym_token16 = 27,
  aux_sym_keysym_token17 = 28,
  aux_sym_keysym_token18 = 29,
  aux_sym_keysym_token19 = 30,
  aux_sym_keysym_token20 = 31,
  aux_sym_keysym_token21 = 32,
  aux_sym_keysym_token22 = 33,
  aux_sym_keysym_token23 = 34,
  aux_sym_keysym_token24 = 35,
  sym_separator = 36,
  aux_sym_command_token1 = 37,
  aux_sym_command_token2 = 38,
  sym_comment = 39,
  sym_source_file = 40,
  sym__definition = 41,
  sym_keymap = 42,
  sym_hotkey = 43,
  sym__hotkey = 44,
  sym_modifier = 45,
  sym_keysym = 46,
  sym_command = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym__hotkey_repeat1 = 49,
  aux_sym_command_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_shift] = "shift",
  [anon_sym_ctrl] = "ctrl",
  [anon_sym_control] = "control",
  [anon_sym_alt] = "alt",
  [anon_sym_opt] = "opt",
  [anon_sym_option] = "option",
  [anon_sym_cmd] = "cmd",
  [anon_sym_command] = "command",
  [anon_sym_hyper] = "hyper",
  [sym_modifier_operator] = "modifier_operator",
  [sym_keysym_operator] = "keysym_operator",
  [aux_sym_keysym_token1] = "keysym_token1",
  [aux_sym_keysym_token2] = "keysym_token2",
  [aux_sym_keysym_token3] = "keysym_token3",
  [aux_sym_keysym_token4] = "keysym_token4",
  [aux_sym_keysym_token5] = "keysym_token5",
  [aux_sym_keysym_token6] = "keysym_token6",
  [aux_sym_keysym_token7] = "keysym_token7",
  [aux_sym_keysym_token8] = "keysym_token8",
  [aux_sym_keysym_token9] = "keysym_token9",
  [aux_sym_keysym_token10] = "keysym_token10",
  [aux_sym_keysym_token11] = "keysym_token11",
  [aux_sym_keysym_token12] = "keysym_token12",
  [aux_sym_keysym_token13] = "keysym_token13",
  [aux_sym_keysym_token14] = "keysym_token14",
  [aux_sym_keysym_token15] = "keysym_token15",
  [aux_sym_keysym_token16] = "keysym_token16",
  [aux_sym_keysym_token17] = "keysym_token17",
  [aux_sym_keysym_token18] = "keysym_token18",
  [aux_sym_keysym_token19] = "keysym_token19",
  [aux_sym_keysym_token20] = "keysym_token20",
  [aux_sym_keysym_token21] = "keysym_token21",
  [aux_sym_keysym_token22] = "keysym_token22",
  [aux_sym_keysym_token23] = "keysym_token23",
  [aux_sym_keysym_token24] = "keysym_token24",
  [sym_separator] = "separator",
  [aux_sym_command_token1] = "command_token1",
  [aux_sym_command_token2] = "command_token2",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_keymap] = "keymap",
  [sym_hotkey] = "hotkey",
  [sym__hotkey] = "_hotkey",
  [sym_modifier] = "modifier",
  [sym_keysym] = "keysym",
  [sym_command] = "command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__hotkey_repeat1] = "_hotkey_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_shift] = anon_sym_shift,
  [anon_sym_ctrl] = anon_sym_ctrl,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_opt] = anon_sym_opt,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_hyper] = anon_sym_hyper,
  [sym_modifier_operator] = sym_modifier_operator,
  [sym_keysym_operator] = sym_keysym_operator,
  [aux_sym_keysym_token1] = aux_sym_keysym_token1,
  [aux_sym_keysym_token2] = aux_sym_keysym_token2,
  [aux_sym_keysym_token3] = aux_sym_keysym_token3,
  [aux_sym_keysym_token4] = aux_sym_keysym_token4,
  [aux_sym_keysym_token5] = aux_sym_keysym_token5,
  [aux_sym_keysym_token6] = aux_sym_keysym_token6,
  [aux_sym_keysym_token7] = aux_sym_keysym_token7,
  [aux_sym_keysym_token8] = aux_sym_keysym_token8,
  [aux_sym_keysym_token9] = aux_sym_keysym_token9,
  [aux_sym_keysym_token10] = aux_sym_keysym_token10,
  [aux_sym_keysym_token11] = aux_sym_keysym_token11,
  [aux_sym_keysym_token12] = aux_sym_keysym_token12,
  [aux_sym_keysym_token13] = aux_sym_keysym_token13,
  [aux_sym_keysym_token14] = aux_sym_keysym_token14,
  [aux_sym_keysym_token15] = aux_sym_keysym_token15,
  [aux_sym_keysym_token16] = aux_sym_keysym_token16,
  [aux_sym_keysym_token17] = aux_sym_keysym_token17,
  [aux_sym_keysym_token18] = aux_sym_keysym_token18,
  [aux_sym_keysym_token19] = aux_sym_keysym_token19,
  [aux_sym_keysym_token20] = aux_sym_keysym_token20,
  [aux_sym_keysym_token21] = aux_sym_keysym_token21,
  [aux_sym_keysym_token22] = aux_sym_keysym_token22,
  [aux_sym_keysym_token23] = aux_sym_keysym_token23,
  [aux_sym_keysym_token24] = aux_sym_keysym_token24,
  [sym_separator] = sym_separator,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [aux_sym_command_token2] = aux_sym_command_token2,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_keymap] = sym_keymap,
  [sym_hotkey] = sym_hotkey,
  [sym__hotkey] = sym__hotkey,
  [sym_modifier] = sym_modifier,
  [sym_keysym] = sym_keysym,
  [sym_command] = sym_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__hotkey_repeat1] = aux_sym__hotkey_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hyper] = {
    .visible = true,
    .named = false,
  },
  [sym_modifier_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_keysym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keysym_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keysym_token24] = {
    .visible = false,
    .named = false,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_keymap] = {
    .visible = true,
    .named = true,
  },
  [sym_hotkey] = {
    .visible = true,
    .named = true,
  },
  [sym__hotkey] = {
    .visible = false,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keysym] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hotkey_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(145);
      ADVANCE_MAP(
        '"', 201,
        '#', 215,
        '\'', 202,
        '+', 155,
        ',', 205,
        '-', 156,
        '.', 204,
        '/', 207,
        ':', 208,
        ';', 200,
        '=', 196,
        'C', 164,
        'H', 174,
        'S', 171,
        '[', 198,
        '\\', 203,
        ']', 199,
        '`', 194,
        'a', 161,
        'c', 159,
        'h', 163,
        'o', 162,
        's', 160,
        'B', 165,
        'b', 165,
        'D', 166,
        'd', 166,
        'E', 173,
        'e', 173,
        'F', 158,
        'f', 158,
        'G', 176,
        'g', 176,
        'L', 169,
        'l', 169,
        'M', 172,
        'm', 172,
        'P', 167,
        'p', 167,
        'Q', 177,
        'q', 177,
        'R', 170,
        'r', 170,
        'T', 168,
        't', 168,
        'U', 175,
        'u', 175,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 201,
        '#', 215,
        '\'', 202,
        ',', 205,
        '-', 195,
        '.', 204,
        '/', 207,
        ';', 200,
        '=', 196,
        '[', 198,
        '\\', 203,
        ']', 199,
        '`', 194,
        'B', 165,
        'b', 165,
        'C', 164,
        'c', 164,
        'D', 166,
        'd', 166,
        'E', 173,
        'e', 173,
        'F', 158,
        'f', 158,
        'G', 176,
        'g', 176,
        'H', 174,
        'h', 174,
        'L', 169,
        'l', 169,
        'M', 172,
        'm', 172,
        'P', 167,
        'p', 167,
        'Q', 177,
        'q', 177,
        'R', 170,
        'r', 170,
        'S', 171,
        's', 171,
        'T', 168,
        't', 168,
        'U', 175,
        'u', 175,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == 'M') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'M') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(182);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 70:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 71:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 75:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 76:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 77:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 81:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(194);
      END_STATE();
    case 82:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(184);
      END_STATE();
    case 84:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(67);
      END_STATE();
    case 85:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 105:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 107:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 110:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 111:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 112:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 136:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 137:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 138:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 139:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 141:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 142:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 143:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 144:
      if (eof) ADVANCE(145);
      ADVANCE_MAP(
        '#', 215,
        '+', 155,
        '-', 156,
        'a', 15,
        'c', 18,
        'h', 34,
        'o', 26,
        's', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_hyper);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_modifier_operator);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_keysym_operator);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == '1') ADVANCE(181);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      ADVANCE_MAP(
        'h', 14,
        'E', 94,
        'e', 94,
        'I', 102,
        'i', 102,
        'L', 40,
        'l', 40,
        'P', 37,
        'p', 37,
      );
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'y') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      ADVANCE_MAP(
        'E', 94,
        'e', 94,
        'I', 102,
        'i', 102,
        'L', 40,
        'l', 40,
        'P', 37,
        'p', 37,
      );
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_keysym_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_keysym_token2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_keysym_token3);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_keysym_token3);
      if (lookahead == '0') ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_keysym_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_keysym_token4);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_keysym_token5);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_keysym_token6);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_keysym_token7);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_keysym_token8);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_keysym_token9);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_keysym_token10);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_keysym_token10);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_keysym_token10);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_keysym_token11);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_keysym_token11);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_keysym_token12);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_keysym_token13);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_keysym_token14);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_keysym_token15);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_keysym_token15);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_keysym_token16);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_keysym_token17);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_keysym_token18);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_keysym_token19);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_keysym_token20);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_keysym_token21);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_keysym_token22);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_keysym_token23);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_keysym_token23);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_keysym_token24);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_command_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 144},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 144},
  [5] = {.lex_state = 144},
  [6] = {.lex_state = 144},
  [7] = {.lex_state = 144},
  [8] = {.lex_state = 144},
  [9] = {.lex_state = 144},
  [10] = {.lex_state = 144},
  [11] = {.lex_state = 144},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_shift] = ACTIONS(1),
    [anon_sym_ctrl] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_hyper] = ACTIONS(1),
    [sym_modifier_operator] = ACTIONS(1),
    [sym_keysym_operator] = ACTIONS(1),
    [aux_sym_keysym_token1] = ACTIONS(1),
    [aux_sym_keysym_token2] = ACTIONS(1),
    [aux_sym_keysym_token3] = ACTIONS(1),
    [aux_sym_keysym_token4] = ACTIONS(1),
    [aux_sym_keysym_token5] = ACTIONS(1),
    [aux_sym_keysym_token6] = ACTIONS(1),
    [aux_sym_keysym_token7] = ACTIONS(1),
    [aux_sym_keysym_token8] = ACTIONS(1),
    [aux_sym_keysym_token9] = ACTIONS(1),
    [aux_sym_keysym_token10] = ACTIONS(1),
    [aux_sym_keysym_token11] = ACTIONS(1),
    [aux_sym_keysym_token12] = ACTIONS(1),
    [aux_sym_keysym_token13] = ACTIONS(1),
    [aux_sym_keysym_token14] = ACTIONS(1),
    [aux_sym_keysym_token15] = ACTIONS(1),
    [aux_sym_keysym_token16] = ACTIONS(1),
    [aux_sym_keysym_token17] = ACTIONS(1),
    [aux_sym_keysym_token18] = ACTIONS(1),
    [aux_sym_keysym_token19] = ACTIONS(1),
    [aux_sym_keysym_token20] = ACTIONS(1),
    [aux_sym_keysym_token21] = ACTIONS(1),
    [aux_sym_keysym_token22] = ACTIONS(1),
    [aux_sym_keysym_token23] = ACTIONS(1),
    [aux_sym_keysym_token24] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym__definition] = STATE(4),
    [sym_keymap] = STATE(4),
    [sym_hotkey] = STATE(15),
    [sym__hotkey] = STATE(20),
    [sym_modifier] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym__hotkey_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_opt] = ACTIONS(9),
    [anon_sym_option] = ACTIONS(7),
    [anon_sym_cmd] = ACTIONS(7),
    [anon_sym_command] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [sym_modifier_operator] = ACTIONS(11),
    [sym_keysym_operator] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_keysym] = STATE(17),
    [aux_sym_keysym_token1] = ACTIONS(15),
    [aux_sym_keysym_token2] = ACTIONS(17),
    [aux_sym_keysym_token3] = ACTIONS(17),
    [aux_sym_keysym_token4] = ACTIONS(17),
    [aux_sym_keysym_token5] = ACTIONS(17),
    [aux_sym_keysym_token6] = ACTIONS(17),
    [aux_sym_keysym_token7] = ACTIONS(17),
    [aux_sym_keysym_token8] = ACTIONS(17),
    [aux_sym_keysym_token9] = ACTIONS(17),
    [aux_sym_keysym_token10] = ACTIONS(15),
    [aux_sym_keysym_token11] = ACTIONS(17),
    [aux_sym_keysym_token12] = ACTIONS(17),
    [aux_sym_keysym_token13] = ACTIONS(17),
    [aux_sym_keysym_token14] = ACTIONS(17),
    [aux_sym_keysym_token15] = ACTIONS(17),
    [aux_sym_keysym_token16] = ACTIONS(17),
    [aux_sym_keysym_token17] = ACTIONS(17),
    [aux_sym_keysym_token18] = ACTIONS(17),
    [aux_sym_keysym_token19] = ACTIONS(17),
    [aux_sym_keysym_token20] = ACTIONS(17),
    [aux_sym_keysym_token21] = ACTIONS(17),
    [aux_sym_keysym_token22] = ACTIONS(17),
    [aux_sym_keysym_token23] = ACTIONS(17),
    [aux_sym_keysym_token24] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_keysym] = STATE(18),
    [aux_sym_keysym_token1] = ACTIONS(15),
    [aux_sym_keysym_token2] = ACTIONS(17),
    [aux_sym_keysym_token3] = ACTIONS(17),
    [aux_sym_keysym_token4] = ACTIONS(17),
    [aux_sym_keysym_token5] = ACTIONS(17),
    [aux_sym_keysym_token6] = ACTIONS(17),
    [aux_sym_keysym_token7] = ACTIONS(17),
    [aux_sym_keysym_token8] = ACTIONS(17),
    [aux_sym_keysym_token9] = ACTIONS(17),
    [aux_sym_keysym_token10] = ACTIONS(15),
    [aux_sym_keysym_token11] = ACTIONS(17),
    [aux_sym_keysym_token12] = ACTIONS(17),
    [aux_sym_keysym_token13] = ACTIONS(17),
    [aux_sym_keysym_token14] = ACTIONS(17),
    [aux_sym_keysym_token15] = ACTIONS(17),
    [aux_sym_keysym_token16] = ACTIONS(17),
    [aux_sym_keysym_token17] = ACTIONS(17),
    [aux_sym_keysym_token18] = ACTIONS(17),
    [aux_sym_keysym_token19] = ACTIONS(17),
    [aux_sym_keysym_token20] = ACTIONS(17),
    [aux_sym_keysym_token21] = ACTIONS(17),
    [aux_sym_keysym_token22] = ACTIONS(17),
    [aux_sym_keysym_token23] = ACTIONS(17),
    [aux_sym_keysym_token24] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_opt,
    ACTIONS(11), 1,
      sym_modifier_operator,
    ACTIONS(13), 1,
      sym_keysym_operator,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_hotkey,
    STATE(20), 1,
      sym__hotkey,
    STATE(6), 2,
      sym_modifier,
      aux_sym__hotkey_repeat1,
    STATE(5), 3,
      sym__definition,
      sym_keymap,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 8,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_cmd,
      anon_sym_command,
      anon_sym_hyper,
  [41] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_opt,
    ACTIONS(29), 1,
      sym_modifier_operator,
    ACTIONS(32), 1,
      sym_keysym_operator,
    STATE(15), 1,
      sym_hotkey,
    STATE(20), 1,
      sym__hotkey,
    STATE(6), 2,
      sym_modifier,
      aux_sym__hotkey_repeat1,
    STATE(5), 3,
      sym__definition,
      sym_keymap,
      aux_sym_source_file_repeat1,
    ACTIONS(23), 8,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_cmd,
      anon_sym_command,
      anon_sym_hyper,
  [82] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_opt,
    ACTIONS(35), 1,
      sym_modifier_operator,
    ACTIONS(37), 1,
      sym_keysym_operator,
    STATE(7), 2,
      sym_modifier,
      aux_sym__hotkey_repeat1,
    ACTIONS(7), 8,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_cmd,
      anon_sym_command,
      anon_sym_hyper,
  [109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_opt,
    ACTIONS(45), 1,
      sym_modifier_operator,
    ACTIONS(48), 1,
      sym_keysym_operator,
    STATE(7), 2,
      sym_modifier,
      aux_sym__hotkey_repeat1,
    ACTIONS(39), 8,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_cmd,
      anon_sym_command,
      anon_sym_hyper,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_opt,
    ACTIONS(50), 11,
      ts_builtin_sym_end,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_cmd,
      anon_sym_command,
      anon_sym_hyper,
      sym_modifier_operator,
      sym_keysym_operator,
  [156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_opt,
    ACTIONS(54), 11,
      ts_builtin_sym_end,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_cmd,
      anon_sym_command,
      anon_sym_hyper,
      sym_modifier_operator,
      sym_keysym_operator,
  [176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_opt,
    ACTIONS(58), 11,
      ts_builtin_sym_end,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_cmd,
      anon_sym_command,
      anon_sym_hyper,
      sym_modifier_operator,
      sym_keysym_operator,
  [196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_opt,
    ACTIONS(62), 10,
      anon_sym_shift,
      anon_sym_ctrl,
      anon_sym_control,
      anon_sym_alt,
      anon_sym_option,
      anon_sym_cmd,
      anon_sym_command,
      anon_sym_hyper,
      sym_modifier_operator,
      sym_keysym_operator,
  [215] = 5,
    ACTIONS(66), 1,
      aux_sym_command_token1,
    ACTIONS(68), 1,
      aux_sym_command_token2,
    ACTIONS(70), 1,
      sym_comment,
    STATE(10), 1,
      sym_command,
    STATE(14), 1,
      aux_sym_command_repeat1,
  [231] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym_command_token1,
    ACTIONS(75), 1,
      aux_sym_command_token2,
    STATE(13), 1,
      aux_sym_command_repeat1,
  [244] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_command_token1,
    ACTIONS(79), 1,
      aux_sym_command_token2,
    STATE(13), 1,
      aux_sym_command_repeat1,
  [257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_separator,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_separator,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_separator,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_separator,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 196,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 231,
  [SMALL_STATE(14)] = 244,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 292,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hotkey_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keymap, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hotkey, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hotkey, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keysym, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 1, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_skbdrc(void) {
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
