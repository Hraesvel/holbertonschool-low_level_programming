#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fpic -c *.c 
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
