#include "main.h"

/**
  * set_bit - Set the value of a bit to 1 at an index
  * @n: Pointer to integer to change its value
  * @index: Index of the bit to set
  * Return: 1 (Success), -1 (Failure)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
	{
		return (-1);
	}
	*n |= (1 << index);

	return (1);
}
