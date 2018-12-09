#include "lists.h"


static dlistint_t *new_node(dlistint_t **head, const int n);

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	*head = new_node(head, n);
	return (*head);
}

static dlistint_t *new_node(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return NULL;
	node->n = n;
	node->prev = NULL;

	if (head || *head)
	{
		node->next = *head;
		head->prev = node;
	}	
	return (node);

}
