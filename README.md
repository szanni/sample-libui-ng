# Sample project using libui-ng

A small example project showing various ways of using
[libui-ng](https://github.com/libui-ng/libui-ng).

## Make

- Install _libui-ng_ on your system.
- Run `make` (_gmake_ or _bmake_).
- Run `./sample`.

Relevant files:

```
Makefile
main.c
```

# Meson

- Run `meson setup build`
- Run `ninja -C build`.
- Run `./build/sample`

This will either detect the system installed _libui-ng_ library (currently
broken as no `.pc` file is provided by _libui-ng_) or build a local version
from git.

Relevant files:

```
meson.build
subprojects/libui.wrap
main.c
```

# License

Public domain.

