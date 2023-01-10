#include "main.h"

/**
  * _strpbrk - Locate the first occurrence in the string @s of any of the bytes
  * in the string @accept
  * @s: Pointer to string to search for accept byte first occurrence in
  * @accept: Pointer to string to search for any of its characters in @s
  * Return: Pointer to character in @s that matches one of the characters
  * in @accept or NULL otherwise
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
