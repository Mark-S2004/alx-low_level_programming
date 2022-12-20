#include "main.h"

/**
  * puts2 - Print every other character of @str followed by a new line
  * @str: Pointer pointing to the string to be printed
  * Return: None
  */
void puts2(char *str)
{
	short len = 0, i;

	while (*(str + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
