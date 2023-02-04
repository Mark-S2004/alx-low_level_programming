#include "main.h"

/**
  * flip_bits - Return the number of bits you would need to flip
  * to get from one number to another
  * @n: Old integer
  * @m: New integer
  * Return: Number of bits needed to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;

	n ^= m;
	while (n)
	{
		n &= n - 1;
		bit_count++;
	}

	return (bit_count);
}
