#include "main.h"

/**
  * print_line - Print a line using the character '_' @n times
  * followed by a new line
  * @n: The length of the line
  * Return: None
  */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
