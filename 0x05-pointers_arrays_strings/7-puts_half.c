#include "main.h"

/**
  * puts_half - Prints half of the string followed by a new line
  * @str: Pointer to a string that will be printed
  * Return: None
  */
void puts_half(char *str)
{
	short len = 0, i;

	while (*(str + len) != '\0')
	{
		len++;
	}

	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
