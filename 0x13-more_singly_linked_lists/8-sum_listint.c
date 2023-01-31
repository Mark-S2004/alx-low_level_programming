#include "lists.h"

/**
  * sum_listint - Return the sum of all data in listint_t list
  * @head: Head pointer to listint_t list
  * Return: Sum of all data, or 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
