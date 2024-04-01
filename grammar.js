/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "skbdrc",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.keymap),

    keymap: ($) => seq($.hotkey, $.separator, $.command),

    hotkey: ($) => $._hotkey,
    _hotkey: ($) =>
      seq(
        repeat(choice($.modifier, $.modifier_operator)),
        $.keysy_operator,
        $.keysym,
      ),

    modifier: (_) =>
      choice(
        "⇧",
        "shift",
        "⌃",
        "ctrl",
        "control",
        "⌥",
        "alt",
        "opt",
        "option",
        "⌘",
        "cmd",
        "command",
        "hyper",
      ),
    modifier_operator: (_) => "+",
    keysy_operator: (_) => "-",
    keysym: (_) =>
      choice(
        /[A-Z]/i,
        /[0-9]/i,
        /f1|f2|f3|f4|f5|f6|f7|f8|f9|f10|f11|f12|f13|f14|f15|f16|f17|f18|f19|f20/i,
        /space|tab/i,
        /enter|return/i,
        /capslock/i,
        /pageup/i,
        /pagedown/i,
        /home|end/i,
        /up|down|left|right/i,
        /escape|esc/i,
        /delete/i,
        /backtick|grave|`/i,
        /dash|minus|-/i,
        /equal|equals|=/i,
        /leftbracket|\[/i,
        /rightbracket|\]/i,
        /semicolon|;/i,
        /quote|"/i,
        /singlequote|'/i,
        /backslash|\\/i,
        /period|\./i,
        /comma|,/i,
        /forwardslash|slash|\//i,
      ),
    separator: (_) => ":",
    command: (_) => seq(repeat(/.*\\\n\s+/), /.*\n/),

    comment: (_) => token(prec(-10, /#.*/)),
  },
});
