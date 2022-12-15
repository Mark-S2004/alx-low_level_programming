#include "main.h"

/**
  * print_numbers - Print numbers from 0 to 9 followed by a new line
  * Return: None
  */
void print_numbers(void)
{
	short i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
