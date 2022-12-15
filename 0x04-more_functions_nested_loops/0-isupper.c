#include "main.h"

/**
 * _isupper - Determines whether the character is an uppercase or not
 *
 * @c: ASCII code of the character
 *
 * Return: 1 if @c is uppercase, 0 otherwise (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

