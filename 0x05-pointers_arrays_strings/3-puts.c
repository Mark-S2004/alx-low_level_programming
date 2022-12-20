#include "main.h"

/**
  * _puts - Print a string followed by a new line to stdout
  * @str: pointer to a string
  * Return: None
  */
void _puts(char *str)
{
	char character;
	short len = 0;

	character = *str;
	while (character != '\0')
	{
		len++;
		_putchar(character);
		character = *(str + len);
	}
	_putchar('\n');
}
