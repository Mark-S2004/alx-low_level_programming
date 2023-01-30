#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - Add a new node at the beginning of a list of type list_t
  * @head: Pointer to pointer to list of type list_t
  * @str: String to store in node
  * Return: New head pointer, Null if malloc failed
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int strlen = 0, i = 0;
	list_t *temp;

	temp = *head;
	*head = malloc(sizeof(list_t));
	if (!(*head))
	{
		free(*head);
		return (NULL);
	}
	(*head)->next = temp;
	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	(*head)->len = strlen;
	(*head)->str = malloc(strlen);
	if (!(*head)->str)
	{
		free((*head)->str);
		return (NULL);
	}
	(*head)->str = strdup(str);

	return (*head);
}
