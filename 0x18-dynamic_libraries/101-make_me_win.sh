#!/bin/bash
wget -P /tmp https://github.com/Noaht8/alx-low_level_programming/raw/master/0x18-dynamic_libraries/winrandom.so
export LD_PRELOAD=/tmp/winrandom.so
