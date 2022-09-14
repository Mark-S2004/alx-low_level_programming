#include "main.h"

/**
 * _abs - Return the absolute value of an integer
 * @n: Integer to calculate its absolute value
 * Return: The absolute value of input integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
