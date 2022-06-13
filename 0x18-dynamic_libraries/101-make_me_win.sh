#!/bin/bash
wget -P /tm https://github.com/Webamz/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libmask.so
