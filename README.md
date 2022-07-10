# Sample project using libui-ng

A small example project showing various ways of using
[libui-ng](https://github.com/libui-ng/libui-ng).

## Make

- Install _libui-ng_ to your system.
- Run `make` (_gmake_ or _bmake_).
- Run `./sample`.

# Meson

- Run `meson setup build`
- Run `ninja -C build`.
- Run `./build/sample`

This will either detect the system installed _libui-ng_ library (currently
broken as no `.pc` file is provided by _libui-ng_) or build a local version
from git.

