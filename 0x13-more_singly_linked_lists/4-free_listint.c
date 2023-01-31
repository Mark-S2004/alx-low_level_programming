#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - Free a listint_t list
  * @head: Head pointer to listint_t list
  * Return: None
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
