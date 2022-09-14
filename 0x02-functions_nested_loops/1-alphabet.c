#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter < 123; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
