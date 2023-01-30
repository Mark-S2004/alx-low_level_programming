#include "lists.h"
#include <stdlib.h>

/**
  * free_list - Free a list of type list_t
  * @head: Pointer to list of type list_t
  * Return: None
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
