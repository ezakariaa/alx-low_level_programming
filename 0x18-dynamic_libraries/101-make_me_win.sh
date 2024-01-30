#!/bin/bash
wget -P .. https://raw.githubusercontent.com/ezakariaa/alx-low_level_programming/ba9ca826c86f5f171e615e11c5cd17d29f4a903b/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
