# 0x08. C - Static libraries

For this Project -- Module -- we learn about static libararies and how to create
them.

## Tasks

### libholberton.a

#### 0. A library is not a luxury but one of the necessities of life

This task I learn to create my first static library--`libholberton.a`-- using some of the source
code I've created for past modules.


<details>
<summary>Src Files Used</summary>
<ul>
<li>0-isupper.o</li>
<li>0-memset.o</li>
<li>0-strcat.o</li>
<li>1-isdigit.o</li>
<li>1-memcpy.o</li>
<li>1-strncat.o</li>
<li>100-atoi.o</li>
<li>2-strchr.o</li>
<li>2-strlen.o</li>
<li>2-strncpy.o</li>
<li>3-islower.o</li>
<li>3-puts.o</li>
<li>3-strcmp.o</li>
<li>3-strspn.o</li>
<li>4-isalpha.o</li>
<li>4-strpbrk.o</li>
<li>5-strstr.o</li>
<li>6-abs.o</li>
<li>9-strcpy.o</li>
<li>_putchar.o</li>
  </ul>
</details>

### [create_static_lib.sh](./create_static_lib.sh)

#### 1. Without libraries what have we? We have no past and no fuiture

This Time rather then just write the command into the promt, I have to create a
shell script that will create a Lib--`liball.a`-- from `*.c` file in the current
directory.

```
#!/bin/bash                                                                                                          
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.c
```

### Write a Blog.

#### 2. Either write something worth reading or do something worth writing

This Task we have to write a blog about what we've learn about Static Libs and
what happens in the background when creating them.

* Why use libraries
* How they work
* How to create them
* How to use them

[Link Placeholder](http://www.google.com)
