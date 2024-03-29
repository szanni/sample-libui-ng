# Sample project using libui-ng

A small example project showing various ways of using
[libui-ng](https://github.com/libui-ng/libui-ng).

## Using Make

- Install _libui-ng_ on your system.
- Run `make` (_gmake_ or _bmake_).
- Run `./sample`.

### Relevant files

```
Makefile
main.c
```

## Using Meson

Meson is a cross platform utility and should allow you to build application
for Unix, macOS, and Windows systems.

- Run `meson setup build`
- Run `ninja -C build`.
- Run `./build/sample` or `build/sample.exe`

This will either detect the system installed _libui-ng_ library (currently
broken as no `.pc` file is provided by _libui-ng_) or build a local version
from git.

### Relevant files

```
meson.build
subprojects/libui.wrap
main.c
win32/app.rc
win32/app.manifest
```

## Windows

To run Windows GUI applications you need to provide an application manifest
via the windows resources mechanism during the build process.

An example of such a manifest can be found in `win32/app.manifest`, which is
included by default when building with `meson`.

## License

Public domain.

