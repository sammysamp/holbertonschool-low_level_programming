#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all elements of a list
 * @h: pointer to a structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", h->len, "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
