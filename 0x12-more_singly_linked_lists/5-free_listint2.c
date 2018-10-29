#include "lists.h"

/**
 * free_listint2 - frees all the node in a list and reset the head to NULL.
 * @head: pointer of pointer to a list.
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
/**
 * free_listint - frees all the node in a list.
 * @head: pointer to a list.
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
