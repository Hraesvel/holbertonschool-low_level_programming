#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx = 0;
	dlistint_t *node;

	if (!head)
		return NULL;
	node = head;
	if (node->prev)
		node = node->prev;
	while (idx < index && node)
	{
		node = node->next;
		idx++;
	}
	return (node); 
}
