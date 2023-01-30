#include "lists.h"
#include <stdlib.h>

/**
  * list_len - Return the number of elements in a linked list of type list_t
  * @h: Head pointer to list of type list_t
  * Return: Number of elements
  */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
