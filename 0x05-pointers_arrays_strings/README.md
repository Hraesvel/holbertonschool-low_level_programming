# 0x05. C - More pointers, arrays and strings

## Tasks

### [0-strcat.c](0-strcat.c)

#### 0. strcat

For this task we have to write a function that concatinates two strings

* prototype char `*_strcat(char *dest, char *src);`
* this function appends the src string to the `dest` string overwriting the
terminating null `\0`.

```
$ gcc 0-main.c 0-strcat.c -o 0-strcat
$ ./0-strcat
Hello 
World!
Hello World!
World!
Hello World!
$
```
