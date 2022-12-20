#include "main.h"

/**
  * swap_int - Swap the values of @a and @b
  * @a: First integer
  * @b: Second integer
  * Return: None
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
