# 0x1D. C - Search Algorithms


**Table Of Context**
- [0. Linear search](#0-Linear-search)
- [1. Binary search](#1-Binary-search)
- [2. Big O #0](#2-Big-O-0)
- [3. Big O #1](#3-Big-O-1)
- [4. Big O #2](#4-Big-O-2)
- [5. Big O #3](#5-Big-O-3)
- [6. Big O #4](#6-Big-O-4)

## Tasks


### 0. Linear search
File: **[0-linear.c](0-linear.c)**


```
martin@0x1D-search_algorithms$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
martin@0x1D-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
martin@0x1D-search_algorithms$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1

```



*[top](#0x1D-C---Search-Algorithms)*

---


### 1. Binary search
File: **[1-binary.c](1-binary.c)**


```
martin@0x1D-search_algorithms$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
martin@0x1D-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary
martin@0x1D-search_algorithms$ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1

```



*[top](#0x1D-C---Search-Algorithms)*

---


### 2. Big O #0
File: **[2-O](2-O)**




*[top](#0x1D-C---Search-Algorithms)*

---


### 3. Big O #1
File: **[3-O](3-O)**




*[top](#0x1D-C---Search-Algorithms)*

---


### 4. Big O #2
File: **[4-O](4-O)**




*[top](#0x1D-C---Search-Algorithms)*

---


### 5. Big O #3
File: **[5-O](5-O)**




*[top](#0x1D-C---Search-Algorithms)*

---


### 6. Big O #4
File: **[6-O](6-O)**


<pre><code>int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i &lt; n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
</code></pre>

*[top](#0x1D-C---Search-Algorithms)*

---




