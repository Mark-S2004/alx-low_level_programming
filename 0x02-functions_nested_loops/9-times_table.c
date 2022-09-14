#include "main.h"

/**
 * times_table - Print times table from 0 to 9
 * Return: void
 */
void times_table(void)
{
	short int i, j, product, first_digit, second_digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			first_digit = product / 10;
			second_digit = product % 10;
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
			_putchar(second_digit + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

