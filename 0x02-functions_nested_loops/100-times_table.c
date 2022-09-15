#include "main.h"

/**
 * print_times_table - Print the @n times table starting with 0
 * @n: The last time table to print
 * Return: void
 */
void print_times_table(int n)
{
	short int i, j, product, first_digit, second_digit, third_digit;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			product = i * j;
			first_digit = product / 100;
			second_digit = product / 10;
			third_digit = product % 10;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				continue;
			}
			if (first_digit)
			{
				_putchar(first_digit + '0');
			} else
			{
				_putchar(' ');
			}
			if (second_digit)
			{
				_putchar(second_digit + '0');
			} else
			{
				_putchar(' ');
			}
			_putchar(third_digit + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
