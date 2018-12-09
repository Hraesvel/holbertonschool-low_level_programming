#include "lists.h"


static dlistint_t *new_node(const int n);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	
	if (*head)
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node(n);
		node->next->prev = node;
	}
	else
	{
		node = new_node(n);
		*head = node;
	}
	return (node);
}


static dlistint_t *new_node(const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return NULL;
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}
