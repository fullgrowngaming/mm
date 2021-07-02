#!/usr/bin/env python3
#
#   Convert time values such as 0x1AAA to their clock time, i.e. 2,30
#   The time is output with a comma for easy copy-pasting into a macro
#

import sys

time = sys.argv[1]
time = int(time, 16 if time.startswith("0x") else 10)

minutes = round(((24 * 60) / 0x10000) * time)

hours = int(minutes // 60)
minutes = round(minutes - 60 * hours)

print(f"{hours},{minutes}")
