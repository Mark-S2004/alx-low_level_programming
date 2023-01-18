#include "main.h"

/**
  * printchar - Print a string followed by a new line
  * @i: Letter index to start printing from
  * @s: String to print
  * Return: None
  */
void printchar(int i, char *s)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	printchar(++i, s);
}

/**
  * _puts_recursion - Print a string followed by a new line
  * @s: String to print
  * Return: None
  */
void _puts_recursion(char *s)
{
	printchar(0, s);
}
