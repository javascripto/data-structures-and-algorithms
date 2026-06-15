# C Implementations

This section contains manual implementations of algorithms and data structures in C.

## Requirements

You need a C compiler and `make`.

## Installation

### MacOS


```sh
xcode-select --install
```

Check:

```sh
clang --version
make --version
```

### Linux (Ubuntu/Debian)

```sh
sudo apt update
sudo apt install build-essential
```

Check:

```sh
gcc --version
make --version
```

## Make build and run

```sh
cd implementations/c
make
make run
make run EXAMPLE=arrays/fixed-array # run a specific example
make clean
```

## Current examples

- arrays/fixed-array
