#include "main.h"

/**
  * print_number - Print an integer using putchar
  * @n: Number to print
  * Return: None
  */
void print_number(int n)
{
	short i = 4, j, temp, start = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (i--)
	{
		temp = n;
		for (j = 0; j < i; j++)
		{
			temp = temp / 10;
		}
		if (temp != 0)
		{
			start = 1;
		}
		if (start || i == 0)
		{
			_putchar(temp % 10 + '0');
		}
	}
}
