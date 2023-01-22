#include "main.h"
#include <stdlib.h>

/**
  * str_concat - Concatenate @s1 and @s2
  * @s1: String
  * @s2: String to concat to @s1
  * Return: Pointer to concatenated string, or NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int strlen1 = 0, strlen2 = 0;

	while (s1[strlen1] != '\0')
	{
		strlen1++;
	}
	while (s2[strlen2] != '\0')
	{
		strlen2++;
	}
	if (s1 == NULL)
	{
		strlen1 = 0;
	}
	if (s2 == NULL)
	{
		strlen2 = 0;
	}
	p = malloc(sizeof(char) * (strlen1 + strlen2 + 1));
	if (!p)
	{
		return (NULL);
	}
	p[strlen1 + strlen2] = '\0';
	while (strlen2--)
	{
		p[strlen2 + strlen1] = s2[strlen2];
	}
	while (strlen1--)
	{
		p[strlen1] = s1[strlen1];
	}

	return (p);
}
