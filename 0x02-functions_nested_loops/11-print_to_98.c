#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from @n to 98
 * @n: Starting number
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			} else
			{
				printf("\n");
			}
		}
	} else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			} else
			{
				printf("\n");
			}
		}
	}
}
