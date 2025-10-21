#!/bin/bash
export PS5SDK_FW=0x102
#export PS5SDK_FW=0x321
cmake -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_TOOLCHAIN_FILE=$PS5SDK/cmake/toolchain-ps5.cmake .
ninja
