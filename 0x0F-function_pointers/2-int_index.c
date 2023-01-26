#include "function_pointers.h"

/**
  * int_index - Search for an integer in @array
  * @array: Array of integers
  * @size: Number of elements in @array
  * @cmp: Function to be used in value compare
  * Return: Index of the first element for which @cmp does not return 0
  * -1 if no element matches
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!size || !array || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
