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
* Returns `1` is `c` is lowercase
* Returns 0 otherwise

```
$ gcc _putchar.c 3-main.c 3-islower.c -o 3-islower
$ ./3-islower
011
$
```


#### [4-isalpha.c](./4-isalpha.c)
###### title: isalpha
I need to recreate a function–`_isalpha()`–that perform that same job as shipped one `isalpha()`
* Prototype: `int _isalpha(int c);`
* Returns `1` if `c`is a letter, lowercase or uppercase
* Returns `0` otherwise

```
$ gcc _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
$ ./4-isalpha
1110
$
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


#### [6-abs.c](./6-abs.c)
###### title: There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you 
Have to create a function–`_abs()`– that performan the same task as `abs()`.
* add prototype to `holberton.h`
```
$ gcc _putchar.c 6-main.c 6-abs.c -o 6-abs
$ ./6-abs
1
0
1
98
$
```


#### [7-print_last_digit.c](./7-print_last_digit.c)
###### title: There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important 
Have to create a function–`print_last_digit(int)`– that print and also return the last digit.
* Prototype: `int print_last_digit(int);` add to `holberton.h`
* Return that last digit.

```
$ gcc _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
$ ./7-last_digit
8044
$
```

#### [8-24_hours.c](./8-24_hours.c)
###### title: I'm federal agent Jack Bauer, and today is the longest day of my life
Have to write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
* Prototype: void jack_bauer(void);
```
$ gcc _putchar.c 8-main.c 8-24_hours.c -o 8-24
$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
$ ./8-24 | wc -l
1440
```


#### [0-holberton.c](./0-holberton.c)
###### title: _putchar

<ph>

```
$ 
```


#### [0-holberton.c](./0-holberton.c)
###### title: _putchar

<ph>

```
$ 
```


#### [0-holberton.c](./0-holberton.c)
###### title: _putchar

<ph>

```
$ 
```


#### [0-holberton.c](./0-holberton.c)
###### title: _putchar

<ph>

```
$ 
```


#### [0-holberton.c](./0-holberton.c)
###### title: _putchar

<ph>

```
$ 
```


#### [0-holberton.c](./0-holberton.c)
###### title: _putchar

<ph>

```
$ 
```

