#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	short int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 97; letter < 123; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
