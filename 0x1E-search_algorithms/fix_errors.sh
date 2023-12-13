#!/bin/bash

# Connect DOS line endings to unix (LF)
dos2unix *.c

# Remove trailing whitespace
sed -i 's/[[:space:]]\+$//' *.c
