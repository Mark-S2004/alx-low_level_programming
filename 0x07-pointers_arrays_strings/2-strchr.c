#include "main.h"

/**
  * _strchr - Return a pointer to the first occurrence of the character @c
  * in the string @s, or NULL if the character is not foun
  * @s: String to search in
  * @c: Character to look for
  * Return: Pointer to the first occurence of character @c or NULL otherwise
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	return (0);
}
