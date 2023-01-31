#include "lists.h"

/**
  * get_nodeint_at_index - Return the nth node of listint_t list
  * @head: Head pointer to listint_t list
  * @index: Index of the node to return its value (starting at 0)
  * Return: Pointer to nth node, or NULL if it does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}

	return (NULL);
}
