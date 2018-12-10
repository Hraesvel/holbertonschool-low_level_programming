#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -fpic *.c 
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
