#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - free memory of a linked list
 * @head: origin pointer linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next = NULL;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
	current = NULL;
}
