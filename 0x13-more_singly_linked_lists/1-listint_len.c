#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print number of elements of a list
 * @h: pointer to a structure
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
