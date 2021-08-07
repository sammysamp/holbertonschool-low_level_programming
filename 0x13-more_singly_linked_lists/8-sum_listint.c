#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - get the sume of n values
 * @head: origin pointer linked list
 * 
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}	
	return (sum);
}
