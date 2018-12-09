#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->prev)
		head = head->prev;
	while(head->next)
	{
		head = head->next;
		/*
		if (head && head->prev)
			printf("was %d\n", head->prev->n);
		*/
		if (head)
			free(head->prev);
	}	
	if (head)
		free(head);
}
