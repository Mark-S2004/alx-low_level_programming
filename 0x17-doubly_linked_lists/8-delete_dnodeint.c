#include "lists.h"
#include <stdlib.h>

/**
  * delete_dnodeint_at_index - Delete the node at @index of doubley linked list
  * @head: Pointer to head pointer to doubley linked list
  * @index: Index of node to be deleted
  * Return: 1 (Success), or -1 (Failed)
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current_node = *head;

	while (current_index != index && current_node)
	{
		current_node = current_node->next;
		current_index++;
	}
	if (current_node)
	{
		if (current_node->next)
		{
			current_node->next->prev = current_node->prev;
		}
		if (current_node->prev)
		{
			current_node->prev->next = current_node->next;
		}
		if (!index)
		{
			*head = current_node->next;
		}
		free(current_node);
	} else
	{
		return (-1);
	}

	return (1);
}
