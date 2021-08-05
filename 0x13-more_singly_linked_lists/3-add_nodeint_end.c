#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of a list
 * @head: origin linked list
 * @n: int field of new node
 * Return: new linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head != NULL)
	{
		temp = *head;
		while (temp != NULL && temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	else
		*head = newNode;
	return (*head);
}
