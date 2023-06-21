# Common commands
## Fixing the nix-shell
For MAC M1, if nix-shell is failing with following error:

``` text
error: anonymous function at /nix/store/gm4rp1786ligd81v2qz420nkrwy0r50k-nixpkgs-src/pkgs/build-support/cc-wrapper/default.nix:8:1 called without required argument 'lib'
```
Please use the nix-shell command as below

``` shell
nix-shell --system x86_64-darwin
```

