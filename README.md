# The Modern Cpp Challenge

These are my solutions to the problems of
[Marius Bancila's book](https://www.packtpub.com/application-development/modern-c-challenge).

The official solutions can be found on the
[book's github](https://github.com/PacktPublishing/The-Modern-Cpp-Challenge).

# Fetching

```bash
$ cd desired_directory
$ git clone https://github.com/TobiasPleyer/ModernCppChallenge.git
$ cd ModernCppChallenge
$ git submodule init && git submodule update
```
# Using

## Requirements

    * C++-17 capable compiler (I currently use g++-7.3.0)
    * CMake version >= 3.6 (I currently use cmake-3.11.4)

## Building

```bash
$ mkdir build && cd build
$ cmake ..
$ make
$ ./problems
```
