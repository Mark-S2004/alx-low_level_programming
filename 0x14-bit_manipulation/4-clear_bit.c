#include "main.h"

/**
  * clear_bit - Set the value of a bit to 0 at an index
  * @n: Pointer to integer to unset one of its bits
  * @index: Index of bit to unset
  * Return: 1 (Success), -1 (Failure)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
	{
		return (-1);
	}
	*n &= ~(1 << index);

	return (1);
}
