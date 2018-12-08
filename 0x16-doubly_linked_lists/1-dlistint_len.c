#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	
	if (!h)
		return 0
	if (h->prev)
		while (h->prev)
			h = h->prev;
	while (h)
	{
		count++;
		h = h->prev;
	}
	return count;
}
