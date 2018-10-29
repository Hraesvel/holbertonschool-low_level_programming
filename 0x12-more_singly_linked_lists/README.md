# 0x12. C - More singly linked lists

## Tasks


### [0-print_listint.c](./0-print_listint.c)

This task have to create a function that will print all the contents of a listint_t
type list.

* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* Format: see example

<details>
<summary>Test 0-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
```

</details>

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_listint.c -o a
$ ./a 
9
8
-> 2 elements
```

### [1-listint_len.c](./1-listint_len.c)

This task have to create a function that return the length of a listint_t
type list.

* Prototype: `size_t listint_len(const listint_t *h);`

<details>
<summary>Test 1-main.c</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
```

</details>

#### Output
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-listint_len.c -o b
$ ./b
-> 2 elements
```
