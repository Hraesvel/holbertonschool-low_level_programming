#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c 
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
