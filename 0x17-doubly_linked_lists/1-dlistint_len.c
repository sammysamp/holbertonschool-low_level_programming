#include "lists.h"

/**
 * dlistint_len - calculate len of linked list
 * @h: doubly linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h != NULL)
	{
		n++;
		if (h->next != NULL)
			n += dlistint_len(h->next);
		return (n);
	}
	return (n);
}
