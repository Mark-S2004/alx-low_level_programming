#include "main.h"
#include <stdlib.h>

/**
  * array_range - Create array of integers from @min to @max
  * @min: First element
  * @max: Last element
  * Return: Pointer to new array
  */
int *array_range(int min, int max)
{
	int *p, i, num = min;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i <= max - min; i++, num++)
	{
		p[i] = num;
	}

	return (p);
}
