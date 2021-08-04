#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add a node at the end of a list
 * @head: origin linked list
 * @str: str field of new node
 * Return: new linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
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
