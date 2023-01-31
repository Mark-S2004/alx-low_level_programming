#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - Add a new node at the end of a listint_t list
  * @head: Pointer to head pointer to listint_t list
  * @n: Integer to store in new node
  * Return: Address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_ptr = *head;

	if (!(*head))
	{
		*head = malloc(sizeof(listint_t));
		node_ptr = *head;
	} else
	{
		while (node_ptr->next)
		{
			node_ptr = node_ptr->next;
		}
		node_ptr->next = malloc(sizeof(listint_t));
		node_ptr = node_ptr->next;
	}
	if (!node_ptr)
	{
		free(node_ptr);
		return (NULL);
	}
	node_ptr->n = n;
	node_ptr->next = NULL;

	return (node_ptr);
}
