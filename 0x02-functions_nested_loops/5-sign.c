#include "main.h"

/**
 * print_sign - Print the sign of number
 * @n: The number to print its sign
 * Return: 1 if @n is positive, 0 if @n is 0, -1 if @n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
