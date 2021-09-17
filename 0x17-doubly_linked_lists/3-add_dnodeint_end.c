#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list.
 * @head: a list of elements with a pointer to the first element
 * @n: a string to create the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *new_node, *ptr = *head;

	while (ptr != NULL && ptr->next != NULL)
		   ptr = ptr->next;
	new_node = (list_t *)malloc(sizeof(list_t));
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
	if (ptr != NULL)
		ptr->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
