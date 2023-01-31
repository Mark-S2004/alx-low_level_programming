#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - Insert a new node at a given position
  * @head: Pointer to head pointer to listint_t list
  * @idx: Index of the list where the new node should be added
  * @n: Data to store in new node
  * Return: Address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev_ptr = *head, *node_ptr = *head;

	while (node_ptr)
	{
		if (i == idx)
		{
			prev_ptr->next = malloc(sizeof(listint_t));
			if (!(prev_ptr->next))
			{
				free(prev_ptr->next);
				return (NULL);
			}
			prev_ptr->next->n = n;
			prev_ptr->next->next = node_ptr;
			return (prev_ptr->next);
		}
		prev_ptr = node_ptr;
		node_ptr = node_ptr->next;
		i++;
	}
	if (i == idx)
	{
		node_ptr = malloc(sizeof(listint_t));
		if (!node_ptr)
		{
			free(node_ptr);
			return (NULL);
		}
		node_ptr->n = n;
		node_ptr->next = NULL;
		prev_ptr->next = node_ptr;
		return (node_ptr);
	}

	return (NULL);
}
