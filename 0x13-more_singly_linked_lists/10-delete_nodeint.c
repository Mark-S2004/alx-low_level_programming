#include "lists.h"
#include <stdlib.h>

/**
  * delete_nodeint_at_index - Delete a node at @index of listint_t list
  * @head: Pointer to head pointer to listint_t list
  * @index: Index of the node that should be deleted
  * Return: 1 (Success), -1 (Fail)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev_ptr = *head, *node_ptr = *head;

	while (node_ptr)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = node_ptr->next;
			}
			prev_ptr->next = node_ptr->next;
			free(node_ptr);
			return (1);
		}
		prev_ptr = node_ptr;
		node_ptr = node_ptr->next;
		i++;
	}

	return (-1);
}
