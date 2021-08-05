#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - add a node at the begining of a list
 * @head: origin linked list
 * @n: int field of new node
 * Return: new linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = strdup(n);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
