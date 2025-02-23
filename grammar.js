/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "skbdrc",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.keymap,
        $.leader
      ),

    keymap: ($) => seq($.hotkey, $.separator, $.command),

    leader: ($) => $._leader,
    _leader: ($) => seq($.directive, $.separator, $.hotkey),

    hotkey: ($) => $._hotkey,
    _hotkey: ($) =>
      seq(
        $.modifier,
        optional(repeat(seq($.modifier_operator, $.modifier))),
        $.keysym_operator,
        $.keysym,
      ),

    directive: (_) => "leader",

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

    keysym_operator: (_) => "-",

    keysym: (_) =>
      choice(
        /space|tab|enter|return/i,

        /caps_lock|capslock|caps/i,

        /page_up|pageup/i,
        /page_down|pagedown/i,
        /home|end/i,

        /up|down|left|right/i,

        /f1|f2|f3|f4|f5|f6|f7|f8|f9|f10|f11|f12|f13|f14|f15|f16|f17|f18|f19|f20/i,

        /escape|esc/i,
        /delete|del/i,

        /grave|backtick|`/i,
        /minus|dash|-/i,
        /equal|equals|=/i,
        /left_bracket|leftbracket|\[/i,
        /right_bracket|rightbracket|\]/i,
        /semicolon|;/i,
        /quote|"/i,
        /single_quote|singlequote|'/i,
        /period|\./i,
        /comma|,/i,
        /backslash|\\/i,
        /slash|forward_slash|forwardslash|\//i,

        /[A-Z]/i,
        /[0-9]/i,
      ),

    separator: (_) => ":",

    command: (_) => seq(repeat(/.*\\\n\s+/), /.*\n/),

    comment: (_) => token(prec(-10, /#.*/)),
  },
});
