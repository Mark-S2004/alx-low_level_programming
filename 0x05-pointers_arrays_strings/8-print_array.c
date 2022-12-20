#include "main.h"
#include <stdio.h>

/**
  * print_array - Print @n elements of array of inetegrs followed by a new line
  * @a: pointer pointing to an array
  * @n: Number of elements to be printed
  * Return: None
  */
void print_array(int *a, int n)
{
	short i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf("%s", ", ");
		}
	}
	printf("\n");
}
