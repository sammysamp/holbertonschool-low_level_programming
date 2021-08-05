#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - free memory of a linked list
 * @head: origin linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}
