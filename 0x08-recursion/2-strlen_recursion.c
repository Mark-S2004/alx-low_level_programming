#include "main.h"

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
  * _strlen_recursion - Calculate string length
  * @s: String
  * Return: String length
  */
int _strlen_recursion(char *s)
{
	return (slen(s, 0));
}
