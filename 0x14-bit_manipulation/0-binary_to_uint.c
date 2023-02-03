#include "main.h"

/**
  * binary_to_uint - Convert binary number to an unsigned int
  * @b: String of binary number
  * Return: Converted number, 0 if b is null or not binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, uint = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		uint *= 2;
		if (b[i] == '1')
		{
			uint += 1;
		}
		i++;
	}

	return (uint);
}
