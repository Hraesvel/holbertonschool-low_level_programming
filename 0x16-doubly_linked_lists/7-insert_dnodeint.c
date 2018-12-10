#include "lists.h"

static dlistint_t *new_node(int n);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new;
	size_t i = 0;

	if (!h && !idx)
		return (*h = new_node(n));
	else if (!idx)
		return (*h = add_dnodeint(h, n));
	node = *h;
	if (node->prev)
		while (node->prev)
			node = node->prev;
	else if (!node->next)
		while (node->prev)
			node = node->prev;
	while (i++ < idx && node->next)
		node = node->next;
	if (i == idx && node)
	{
		new = new_node(n);
		if (node->next)
			node->next->prev = new;
		new->next = node->next;
		node->next = new;
	}
	else
		return (NULL);
	return (new);

}

static dlistint_t *new_node(int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return NULL;
	node->n = n;
	node->next = node->prev = NULL;

	return (node);
}
