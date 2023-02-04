#include "main.h"

/**
  * get_bit - Return the value of a bit at a given index
  * @n: Integer
  * @index: index starting from 0 of the bit
  * Return: Value of the bit, -1 if an error occurred
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 31, bit;

	if (index > 31)
	{
		return (-1);
	}
	while (n)
	{
		if ((int)n - (1 << i) >= 0)
		{
			n -= 1 << i;
			bit = 1;
		} else
		{
			bit = 0;
		}
		if (i == index)
		{
			return (bit);
		}
		i--;
	}

	return (0);
}
