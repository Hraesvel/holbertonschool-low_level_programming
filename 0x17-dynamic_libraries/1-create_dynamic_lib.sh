#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -c *.c
gcc -shared *.o -o liball.so
