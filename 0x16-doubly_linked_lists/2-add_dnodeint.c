#include "lists.h"


static dlistint_t *new_node(dlistint_t **head, const int n);

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	
	node = new_node(head,n);
	*head = node;
	return (node);
}

static dlistint_t *new_node(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return NULL;
	node->n = n;

	if (*head)
	{
		node->next = *head;
		(*head)->prev = node;
	}
	else
	{
		node->prev = NULL;
		node->next = NULL;
	}

	return (node);
}
