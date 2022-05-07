# Minimal gn build environment for Windows platform

This is an example from [GN quick start guide](https://gn.googlesource.com/gn/+/main/docs/quick_start.md) with some necessary modification to make it works on Windows platform.

## Prerequisites

* Have gn.exe in your environment PATH.

## Run
Run below cmd in Visual Studio command prompt because we expect the cl.exe, link.exe and lib.exe can be found in `PATH`.

```cmd
// generate ninja file
gn gen out\Debug

// build exe
cd out\Debug
ninja hello
```

## Necessary Files

### .gn
It's should be put in the root folder of your gn project because gn use it to identity the gn root. And it should clarify which build config is being used.

### BUILD.gn
This file defines how each source file is used.

### build/BUILDCONFIG.gn
You must set a default toolchain in this file.

### build/toolchain/BUILD.gn
This is where toolchain defined. It defines how the code will be complied.


## Reference

For anything related to gn, please check [GN reference](https://gn.googlesource.com/gn/+/refs/heads/main/docs/reference.md).

