#include "lists.h"
#include <stdlib.h>

/**
  * add_dnodeint - Add a new node at the beginning of a doubley linked list
  * @head: Pointer to head pointer to doubley linked list
  * @n: Integer to store in the new node
  * Return: Address of new node (Success), or Null (Failed)
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
