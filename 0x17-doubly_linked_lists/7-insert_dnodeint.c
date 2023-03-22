#include "lists.h"
#include <stdlib.h>

/**
  * insert_dnodeint_at_index - Insert a new node at a given index
  * @h: Pointer to h pointer to doubley linked list
  * @idx: Index of the list where the new node should be added
  * @n: Integer to store in the new node
  * Return: Address of new node (Success), or NULL (Failed)
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int current_idx = 1;
	dlistint_t *current_node = *h, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (!idx)
	{
		if (*h)
		{
			(*h)->prev = new_node;
		}
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	while (current_idx != idx && current_node)
	{
		current_node = current_node->next;
		current_idx++;
	}
	if (current_node)
	{
		new_node->prev = current_node;
		new_node->next = current_node->next;
		current_node->next = new_node;
	} else
	{
		return (NULL);
	}
	if (new_node->next)
	{
		new_node->next->prev = new_node;
	}
	return (new_node);
}
