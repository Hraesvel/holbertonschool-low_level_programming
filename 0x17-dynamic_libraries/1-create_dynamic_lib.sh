#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -c *.c
gcc -Wall -Werror -Wextra -pedantic -shared *.o -o liball.so
