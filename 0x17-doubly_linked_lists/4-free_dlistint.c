#include "lists.h"
#include <stdlib.h>

/**
  * free_dlistint - Free a doubley linked list
  * @head: Head pointer to doubley linked list
  * Return: None
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
