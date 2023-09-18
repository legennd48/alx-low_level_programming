#!/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -IPIC -c *.c
gcc -shared -o liball.so *.o
nm -D liball.so
