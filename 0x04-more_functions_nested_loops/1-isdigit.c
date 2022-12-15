#include "main.h"

/**
 * _isdigit - Checks whether the charachter is a digit or not
 * @c: Character to check
 * Return: 1 if @c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
