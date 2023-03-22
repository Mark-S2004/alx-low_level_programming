#include "lists.h"

/**
  * sum_dlistint - Sum of all n integers in doubley linked list
  * @head: Head pointer to soublwy linked list
  * Return: Sum of data in list, 0 if it is empty
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
