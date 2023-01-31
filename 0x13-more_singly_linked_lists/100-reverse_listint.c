#include "lists.h"

/**
  * reverse_listint - Reverse listint_t list
  * @head: Pointer to head pointer to listint_t list
  * Return: Head pointer to the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr = NULL, *next_ptr;

	while (*head)
	{
		next_ptr = (*head)->next;
		(*head)->next = prev_ptr;
		prev_ptr = *head;
		*head = next_ptr;
	}
	*head = prev_ptr;

	return (*head);
}
