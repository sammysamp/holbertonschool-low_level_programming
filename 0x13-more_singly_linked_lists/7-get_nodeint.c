#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node
 * @head: origin pointer linked list
 * @index: index
 * Return: n node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (0);
	current = head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			return (NULL);
		}
	}
	return (current);
}
