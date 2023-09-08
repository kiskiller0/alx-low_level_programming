#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 $CSRC
./a.out
rm a.out
