# 0x02. C - Functions, nested loops

Test `*-main.c` file are locate in `main` directory.

### Tasks

#### [0-holberton.c](./0-holberton.c)
###### title: _putchar

For this task we have to write a program that print `Holberton`, followed by a new line, using `_putchar()`.
This first task is also use to check if we added `int _putchar(char c);` correctly to the `holberton.h` file.

```
$ ./0-holberton
Holberton
$ 
```

#### [1-alphabet.c](./1-alphabet.c)
###### title: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

For this task create a function that print the alphabet on a line + newline after as well as have to add the prototype: `void print_alphabet(void);` to my `holberton.h` file. I'm also barred from using standard libs, only `_putchar()`
* `_putchar()` only.

```
$ ./1-alphabet
abcdefghijklmnopqrstuvwxyz
$
```

#### [2-print_alphabet_x10.c](./2-print_alphabet_x10.c)
###### title: 10 x alphabet

Simalar from prior task create a function that print the alphabet on a line + newline 10 times as well as add the prototype: `void print_alphabet_x10(void);` to my `holberton.h` file. 
* `_putchar()` only.

```
$ ./2-print_alphabet_x10
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
$
```

#### [3-islower.c](./3-islower.c)
###### title: 0. _islower
I have to write a function–`_islower`–that perform the same fuctions as one shipped with "C" `islower()`.
* add to `holberton.h`

```
$ gcc _putchar.c 3-main.c 3-islower.c -o 3-islower
$ ./3-islower
011
$
```


#### [4-isalpha.c](./4-isalpha.c)
###### title: isalpha
I need to recreate a function–`_isalpha()`–that perform that same job as shipped one `isalpha()`

```
$ hello world
```


#### [5-sign](./5-sign.c)
###### title: 5-sign
Have to create is function that prints the sign `+/-` of a given number or "Zero".
* Prototype: int print_sign(int n);
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero

```
$ gcc _putchar.c 5-main.c 5-sign.c -o 5-sign
$ ./5-sign
+, 1
0, 0
+, 1
-, /
$ 
```


#### [0. _putchar](./0-holberton.c)
###### title: 0. _putchar
```
$ hello world
```


