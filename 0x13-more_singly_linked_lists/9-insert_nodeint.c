#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: origin pointer linked list
 * @idx: index
 * @n: n value of new node
 * Return: n node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *newNode;
	unsigned int i;

	if (head == NULL)
		return (0);
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			return (NULL);
		}
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = current->next;
	current->next = newNode;
	return (*head);
}
