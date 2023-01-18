#include "main.h"

/**
  * printchar - Print string in reverse
  * @s: String
  * @slen: String length
  * Return: None
  */
void printchar(char *s, int slen)
{
	if (slen < 1)
	{
		return;
	}
	_putchar(s[slen - 1]);
	printchar(s, --slen);
}

/**
  * slen - Calculate string length
  * @s: String
  * @i: First letter index
  * Return: String length
  */
int slen(char *s, int i)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	return (slen(s, ++i));
}

/**
  * _print_rev_recursion - Print a string in reverse
  * @s: String to print in reverse
  * Return: None
  */
void _print_rev_recursion(char *s)
{
	printchar(s, slen(s, 0));
}
