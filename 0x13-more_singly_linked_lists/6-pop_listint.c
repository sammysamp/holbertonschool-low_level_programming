#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - delete first node of linked list
 * @head: origin pointer linked list
 *
 * Return: n value of head
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL)
		return (0);
	current = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(current);
	return (n);
}
