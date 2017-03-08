# bitcoin-cpp-script

[![Build Status](https://travis-ci.org/bitjson/bitcoin-cpp-script.svg?branch=master)](https://travis-ci.org/bitjson/bitcoin-cpp-script)

** (Work in progress) **

Simple CLI to execute programs in Bitcoin Script using the interpreter from the [reference implementation](https://github.com/bitcoin/bitcoin/).

## Requirements

- `git`
- `cmake` version `2.8` or higher.
- `gcc` or `clang` that supports `std=c++11`.

## Installation

Generate build files with:

```bash
git clone --recursive git@github.com:bitjson/bitcoin-cpp-script.git
cd bitcoin-cpp-script
./make.sh

cd build

# use CLI
./bitcoin-cpp-script [hex-encoded script]
# execute tests
./tests
```

If you don't use `git clone --recursive`,  you'll have to manually setup the submodules with:

```
$ git submodule update --init --recursive
```

## Usage

```bash
./bitcoin-cpp-script [hex-encoded script]
```

## Project Structure

### `./src` is where code goes

When you add a new file, don't forget to update `CMakeLists.txt` and execute `cmake` again.

```
add_library(core
	# add your *.cpp here
	)
```

### `./test` is where tests go

Same as `src`, when you add a new file, you have to update `CMakeLists.txt` and execute `cmake` again.

```
add_executables(tests
	./tests/main-test.cpp
	# add your *-test.cpp here
	)
```

### `./third-party` hosts third party libraries

They don't necessarily have to be submodules. You probably have to `add_subdirectory` and `include_directories` in `CMakeLists.txt`.

### `./build` holds `cmake` generated files and the executables

If you want to build from scratch again, you can just delete `build` and start again.

## License

MIT, see [LICENSE.md](./LICENSE.md) for more details.

## Boilerplate

This project was created using the fantastic C++11 starter project by `vaalentin`: [cpp-boilerplate](https://github.com/vaalentin/cpp-boilerplate).
