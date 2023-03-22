#include "lists.h"
#include <stdlib.h>

/**
  * get_dnodeint_at_index - Return the nth node of a doubley linked list
  * @head: Head pointer to doubley linked list
  * @index: Index of the node to get its value
  * Return: Null if node does not exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (current_index != index && head)
	{
		head = head->next;
		current_index++;
	}

	return (head);
}
