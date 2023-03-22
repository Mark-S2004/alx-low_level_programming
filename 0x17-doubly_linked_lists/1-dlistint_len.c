#include "lists.h"

/**
  * dlistint_len - Return the number of elements in a doubley linked list
  * @h: Head pointer to doubley linked list
  * Return: List length
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
