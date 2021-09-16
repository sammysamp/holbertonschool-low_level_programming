#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list_t list
 * @h: doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	do {
		printf("%d\n", h->n);
		h = h->next;
		size++;
	} while (h->next != NULL);
	printf("%d\n", h->n);
	size++;
	return (size);
}
