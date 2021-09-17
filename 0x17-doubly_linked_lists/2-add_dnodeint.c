#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: a list of elements with a pointer to the first element
 * @n: integer to create the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (new_node->n == '\0')
	{
		free(new_node);
		return (NULL);
	}
	if (head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
