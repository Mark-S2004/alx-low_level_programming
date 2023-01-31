#include "lists.h"

/**
  * listint_len - Return the number of elements in listint_t list
  * @h: Head pointer to listint_t list
  * Return: List length
  */
size_t listint_len(const listint_t *h)
{
	size_t listlen = 0;

	while (h)
	{
		listlen++;
		h = h->next;
	}

	return (listlen);
}
