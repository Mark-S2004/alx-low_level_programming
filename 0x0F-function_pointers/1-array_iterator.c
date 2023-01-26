#include "function_pointers.h"

/**
  * array_iterator - Pass each element in @array to @action
  * @array: Array of integers
  * @size: Size of @arr
  * @action: Function returns none and takes an integer as a parameter
  * Return: None
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!size || !action || !array)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
