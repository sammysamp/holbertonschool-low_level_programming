#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements of a list
 * @h: pointer to a structure
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->n != 0)
			printf("%d\n", h->n);
		else
			printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
