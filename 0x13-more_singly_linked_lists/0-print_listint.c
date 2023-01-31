#include "lists.h"
#include <stdio.h>

/**
  * print_listint - Print all elements of listint_t list
  * @h: Head pointer to listint_t list
  * Return: Number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_count);
}
