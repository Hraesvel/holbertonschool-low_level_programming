# 0x12. C - More singly linked lists

## Tasks


### [0-print_listint.c](./0-print_listint.c)

This task have to create a function that will print all the contents of a listint_t
type list.

* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* Format: see example

<details>
<summary>Example main.c</summary>

```C
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
