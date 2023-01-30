#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - Print all the elements of list of type list_t
  * @h: Head pointer to list of type list_t
  * Return: Number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (node_count);
}
