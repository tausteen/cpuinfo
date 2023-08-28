# cpuinfo
A simple CLI tool for displaying CPU information
- model and frequency
- cores

## Features

- Cross-platform availability:
  - Linux, Windows and MacOS
  - x86, x86-64, ARM, and ARM64 architectures (ARM not supported for MacOS)
- Compilable by gcc, clang and msvc
- cmake as a build system
  - Includes 3rdparty sw https://github.com/lfreist/hwinfo using git submodules
- Github actions for ci pipeline
- Unit tests by ctest

## Build `cpuinfo`

> Requirements: git, cmake, c++ compiler (gcc, clang, MSVC)

1. Download repository:
    ```
    git clone https://github.com/tausteen/cpuinfo.git
    ```
2. Build using cmake:
    ```
    mkdir build
    cd build
    cmake .. && make
    ```


## Run by Github Actions

Output from testing is shown under "Run" in Github Actions.

## Example

See [main.cpp](src/main.cpp)

The output should look similar to this one:

```
--------------------------------- CPU INFO ---------------------------------
model and frequency:     Intel(R) Xeon(R) Platinum 8171M CPU @ 2.60GHz
physical cores:          2
logical cores:           2
```
