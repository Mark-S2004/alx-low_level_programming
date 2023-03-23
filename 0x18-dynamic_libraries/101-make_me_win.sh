#!/bin/bash
wget -P /tmp https://github.com/Mark-S2004/alx-low_level_programming/raw/master/0x18-dynamic_libraries/rand_override.so
export LD_PRELOAD=/tmp/rand_override.so
