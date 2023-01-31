#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - Add a new node at the beginning of listint_t list
  * @head: Pointer to head pointer of listint_t list
  * @n: Integer to store inside the node
  * Return: Address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;

	*head = malloc(sizeof(listint_t));
	if (!(*head))
	{
		free(*head);
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = temp;

	return (*head);
}
