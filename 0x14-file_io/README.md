# 0x14. C - File I/O

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

## Tasks

#### [0-read_textfile.c](./0-read_textfile.c)
- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- where letters is the number of letters it should read and print
- returns the actual number of letters it could read and print
- if the file can not be opened or read, return `0`
- if `filename` is `NULL` return `0`
- if `write` fails or does not write the expected amount of bytes, return `0`

<details>
<summary>Test File</summary>
    
```
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.
```

</details>

<details>
<summary>Test 0-main.c</summary>
    
```C
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
```
</details>

##### OUTPUT
```
$ ./a Requiescat
Requiescat
by Oscar Wilde
...
...
...
(printed chars: 468)
$
```
---
