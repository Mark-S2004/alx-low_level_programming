#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - Delete the head node of a listint_t list
  * @head: Pointer to head pointer to listint_t list
  * Return: Head node data, or 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!(*head))
	{
		return (0);
	}
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
