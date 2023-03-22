#include "lists.h"
#include <stdio.h>

/**
  * print_dlistint - Print all elements of a doubley linked list
  * @h: Head pointer to doubley linked list
  * Return: Number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}

	return (length);
}
