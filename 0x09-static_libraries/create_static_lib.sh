#!/bin/bash

# compile all .c files to .o
gcc -c *.c

# create the static library
ar -rc liball.a *.o
