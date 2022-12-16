#include "main.h"

/**
  * print_square - Print a square followed by a new line
  * @size: The dimensions of the square
  * Return: None
  */
void print_square(int size)
{
	short i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
