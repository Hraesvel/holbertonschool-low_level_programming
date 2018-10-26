#include "lists.h"
#include <string.h>
#include <stdio.h>

list_t *new_node(const char *str);
/**
 * add_node_end - added a new node to the end of a list.
 * @head: pointer to pointer of a list_t
 * @str: string to copy into a node.
 *
 * Return: pointer to a list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	
	if (!(*head))
	{
		*head = new_node(str);
		return (*head);
	}
	
	new = new_node(str);
	if (!(*head)->next)
	{
		new->next = (*head)->next;
		(*head)->next = new;
	}
	else
		add_node_end(&(*head)->next, str);

        return (*head);
}

list_t *new_node(const char *str)
{
	list_t *new;
	size_t len;
	
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	
	new->str = malloc(sizeof(char) *len + 1);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	return (new);
}
