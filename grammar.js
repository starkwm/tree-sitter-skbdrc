/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "skbdrc",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.set_leader, $.keymap, $.leader_keymap),

    set_leader: ($) => $._set_leader,
    _set_leader: ($) => seq($.directive, $.separator, $.hotkey),

    directive: (_) => "leader",

    keymap: ($) => seq($.hotkey, $.separator, $.command),

    hotkey: ($) => $._hotkey,
    _hotkey: ($) =>
      seq(
        $.modifier,
        optional(repeat(seq($.modifier_operator, $.modifier))),
        $.key_operator,
        $.key,
      ),

    leader_keymap: ($) => $._leader_keymap,
    _leader_keymap: ($) =>
      seq($.leader_key, repeat($.key), $.separator, $.command),

    leader_key: ($) => $._leader_key,
    _leader_key: (_) => token("<leader>"),

    modifier: (_) =>
      choice(
        "shift",
        "ctrl",
        "control",
        "alt",
        "opt",
        "option",
        "cmd",
        "command",
        "meh",
        "hyper",
      ),

    modifier_operator: (_) => "+",

    key_operator: (_) => "-",

    key: (_) =>
      choice(
        // Common keys and navigation
        /(space|tab|enter|return|escape|esc|delete|del)/i,

        // Special keys
        /caps_?lock|caps/i, // Optional underscore
        /page_(up|down)|page(up|down)/i, // Combines both page patterns
        /home|end|up|down|left|right/i,

        // Function keys (simplified range)
        /f(?:[1-9]|1[0-9]|20)/i, // Matches f1-f20

        // Punctuation and symbols
        /[`\-=\[\];'",.\/\\]/i, // Simple symbols in a character class
        /(grave|backtick|minus|dash|equal|equals|left_?bracket|right_?bracket|semicolon|quote|single_?quote|period|comma|backslash|slash|forward_?slash)/i,

        // Letters and numbers
        /[A-Z0-9]/i, // Combined alphanumeric
      ),

    separator: (_) => ":",

    command: (_) => /(?:.*\\\n\s+)*.*\n/,

    comment: (_) => token(prec(-10, /#.*/)),
  },
});
