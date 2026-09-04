{
  pkgs,
  lib,
  config,
  inputs,
  ...
}:

{
  languages.c.enable = true;

  packages = with pkgs; [
    neocmakelsp
    cmake-language-server
  ];

  # See full reference at https://devenv.sh/reference/options/
}
