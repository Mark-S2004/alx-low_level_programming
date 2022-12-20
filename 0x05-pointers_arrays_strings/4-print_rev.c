#include "main.h"

/**
  * print_rev - Print @s string in reverse followed by a new line
  * @s: Pointer to string that will be printed in reverse
  * Return: None
  */
void print_rev(char *s)
{
	char character;
	short len = 0;

	character = *s;
	while (character != '\0')
	{
		len++;
		character = *(s + len);
	}

	while (len--)
	{
		_putchar(*(s + len));
	}
}
