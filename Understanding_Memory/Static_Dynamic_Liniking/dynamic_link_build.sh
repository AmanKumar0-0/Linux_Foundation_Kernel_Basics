#!/usr/bin/env bash

set -e

echo "Dynamically Building the file :)\n"

#ls -la

gcc hello.c -o hello_dynamic

# This will display the file type info of the executable file
file hello_dynamic  

# To see the shared library dependecies
ldd hello_dynamic

# Output 
./hello_dynamic

# size comparison
size hello_dynamic
