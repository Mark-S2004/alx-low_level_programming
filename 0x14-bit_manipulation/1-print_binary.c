#include "main.h"

/**
  * print_binary - Print the binary representation of a number
  * @n: Number to print its binary representation
  * Return: None
  */
void print_binary(unsigned long int n)
{
	int i = 31, start = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}
	while (n)
	{
		if ((int)n - (1 << i) >= 0)
		{
			_putchar('1');
			n -= 1 << i;
			start = 1;
		} else if (start)
		{
			_putchar('0');
		}
		i--;
	}
	i++;
	while (i--)
	{
		_putchar ('0');
	}
}
