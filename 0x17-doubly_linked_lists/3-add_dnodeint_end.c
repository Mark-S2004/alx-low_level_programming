#include "lists.h"
#include <stdlib.h>

/**
  * add_dnodeint_end - Add a new node at the end of a doubley linked list
  * @head: Pointer to head pointer to doubley linked list
  * @n: Integer to store in new node
  * Return: Address of the new element (Success), or NULL (Failed)
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (tail->next)
	{
		tail = tail->next;
	}
	new_node->prev = tail;
	tail->next = new_node;

	return (new_node);
}
