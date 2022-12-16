#include "main.h"

/**
  * print_triangle - Print triangle using character '#' followed by a new line
  * @size: size of the triangle
  * Return: None
  */
void print_triangle(int size)
{
	short i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
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
