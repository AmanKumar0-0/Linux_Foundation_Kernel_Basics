#!/usr/bin/env bash

#set -e

printf "Static Linking the file :)\n"

gcc -static hello.c -o hello_static

# file detatails of the executable
file hello_static

# Shared libraries and dependies
ldd hello_static

# Size of the executable
size hello_static

# Output
./hello_static


