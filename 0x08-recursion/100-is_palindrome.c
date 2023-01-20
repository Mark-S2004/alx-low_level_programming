#include "main.h"

/**
  * recursive_check - Check if the @s is palindrome
  * @s: String to check
  * @start: First character in @s index
  * @end: Last character in @s index
  * @strlen: @s length
  * Return: 1 if @s is palindrome, 0 otherwise
  */
int recursive_check(char *s, int start, int end, int strlen)
{
	if (strlen == 0)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	if (start >= strlen / 2)
	{
		return (1);
	}
	return (recursive_check(s, ++start, --end, strlen));
}

/**
  * _strlen - Calculate @s length
  * @s: String to calculate its length
  * @i: Character counter
  * Return: string length
  */
int _strlen(char *s, int i)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	return (_strlen(s, ++i));
}

/**
  * is_palindrome - Check if the @s is palindrome
  * @s: String to check
  * Return: 1 if @s is palindrome, 0 otherwise
  */
int is_palindrome(char *s)
{
	return (recursive_check(s, 0, _strlen(s, 0) - 1, _strlen(s, 0)));
}
