local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.skbdrc = {
  install_info = {
    url = "https://github.com/starkwm/tree-sitter-skbdrc",
    branch = "main",
    files = { "src/parser.c" },
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = "skbdrc",
  used_by = { "skbdrc" },
}

local M = {}

M.setup = function()
  vim.filetype.add {
    pattern = {
      ["skbdrc"] = "skbdrc",
    },
  }
end

return M
