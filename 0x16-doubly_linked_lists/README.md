# 0x16. C - Doubly linked lists

## Task

### [0-print_dlistint](./0-print_dlistint.c)

Write a function that prints all the elements of a `dlistint_t` list.


* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: the number of nodes
* Format: see example

<details>
<summary>Test main</summary>

```C
#include <stdlib.h>                                                 
#include <string.h>                                                 
#include <stdio.h>                                                  
#include "lists.h"                                                  
                                                                    
/**                                                                 
 * main - check the code for Holberton School students.             
 *                                                                  
 * Return: Always EXIT_SUCCESS.                                     
 */                                                                 
int main(void)                                                      
{                                                                   
    dlistint_t *head;                                               
    dlistint_t *new;                                                
    dlistint_t hello = {8, NULL, NULL};                             
    size_t n;                                                       
                                                                    
    head = &hello;                                                  
    new = malloc(sizeof(dlistint_t));                               
    if (new == NULL)                                                
    {                                                               
        dprintf(2, "Error: Can't malloc\n");                        
        return (EXIT_FAILURE);                                      
    }                                                               
    new->n = 9;                                                     
    head->prev = new;                                               
    new->next = head;                                               
    new->prev = NULL;                                               
    head = new;                                                     
    n = print_dlistint(head);                                       
    printf("-> %lu elements\n", n);                                 
    free(new);                                                      
    return (EXIT_SUCCESS);                                          
}                                                                   

```

</details>

**Demo**

```
$ gcc 0-main.c 0-print_dlistint.c -o a
$ ./a
9
8
-> 2 elements
$ 
```

---
### [1-dlistint_len](./1-dlistint_len.c)

Write a function that returns the number of elements in a linked `dlistint_t` list.

* Prototype: `size_t dlistint_len(const dlistint_t *h);`

<details>
<summary>Test Main</summary>

```C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}

```

</details>

**Demo**

```
$ gcc 1-main.c 1-dlistint_len.c -o b
$ ./b
-> 2 elements
$ 
```

---

### [2-add_dnodeint](./2-add_dnodeint.c)

Write a function that adds a new node at the beginning of a `dlistint_t` list.


* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

<details>
<summary>Test Main</summary>

```C
#include <stdlib.h>                                                      
#include <string.h>                                                      
#include <stdio.h>                                                       
#include "lists.h"                                                       
                                                                         
/**                                                                      
 * main - check the code for Holberton School students.                  
 *                                                                       
 * Return: Always EXIT_SUCCESS.                                          
 */                                                                      
int main(void)                                                           
{                                                                        
        dlistint_t *head;                                                
                                                                         
        head = NULL;                                                     
        add_dnodeint(&head, 0);                                          
        add_dnodeint(&head, 1);                                          
        add_dnodeint(&head, 2);                                          
        add_dnodeint(&head, 3);                                          
        add_dnodeint(&head, 4);                                          
        add_dnodeint(&head, 98);                                         
        add_dnodeint(&head, 402);                                        
        add_dnodeint(&head, 1024);                                       
        print_dlistint(head);                                            
                                                                         
                                                                         
return (EXIT_SUCCESS);                                                   
}                                                                        

```

</detail>

**Demo**

```
$ gcc 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
$ ./c
1024
402
98
4
3
2
1
0
$ 
```

---


