#include "main.h"

/**
 * print_last_digit - Print the last digit of number
 * @n: Number to print its last digit
 * Return: Last digit
 */
int print_last_digit(int n)
{
	short int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit *= -1;
	}
	_putchar(digit + 48);
	return (digit);
}
