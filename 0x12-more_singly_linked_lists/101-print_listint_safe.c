#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to head of a list.
 *
 * Return: Length of list (INT)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len;
	const listint_t *h1, *h2;
	int tog = 0;

	if (!head)
		return (0);

	h1 = head;
	len = 0;
	while (h1)
	{ 
		if (len > 20)
			break;
		h2 = head;
		tog = 0;
		while (h2)
		{
			printf("-%p %d: %p %d\n",(void*)h1,h1->n, (void*)h2, h2->n);
			tog++;
			if (tog > 0)
				break;
			else if ((h1 == h2) && (tog > 1))
			{
				printf("-> [%p] %d\n",(void*)h1, h1->n);
				exit(98);
			}
			else if (tog > 2)
				break;
			h2 = h2->next;
		}
	/*	printf("[%p] %d\n", (void*)h1, h1->n); */
		len++;
		h1 = h1->next;
	}
	return (len);
}
