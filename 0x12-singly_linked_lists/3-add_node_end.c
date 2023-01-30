#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * add_node_end - Add a new node at the end of a list of type list_t
  * @head: Pointer to pointer to list of type list_t
  * @str: String
  * Return: Pointer to new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_ptr = *head;
	int i = 0, strlen = 0;

	if (!(*head))
	{
		node_ptr = malloc(sizeof(list_t));
		*head = node_ptr;
	} else
	{
		while (node_ptr->next != NULL)
		{
			node_ptr = node_ptr->next;
		}
		node_ptr->next = malloc(sizeof(list_t));
		node_ptr = node_ptr->next;
	}
	if (!node_ptr)
	{
		free(node_ptr);
		return (NULL);
	}
	node_ptr->next = NULL;
	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	node_ptr->len = strlen;
	node_ptr->str = malloc(strlen);
	if (!node_ptr->str)
	{
		free(node_ptr->str);
		return (NULL);
	}
	node_ptr->str = strdup(str);

	return (node_ptr);
}
