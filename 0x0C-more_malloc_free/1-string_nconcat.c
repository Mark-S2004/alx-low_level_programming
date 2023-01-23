#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - Concatenate the first @n bytes of @s2 to @s1
  * @s1: String to concatenate to
  * @s2: String to concatenate to @s1
  * @n: Number of characters to concat from @s2
  * Return: Pointer to the concatenated string, NULL if function fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int strlen1 = 0, strlen2 = 0, i;
	char *p;

	while (s1[strlen1] != '\0' && s1 != NULL)
	{
		strlen1++;
	}
	while (s2[strlen2] != '\0' && s2 != NULL)
	{
		strlen2++;
	}
	if (n > strlen2)
	{
		n = strlen2;
	}
	p = malloc(strlen1 + n + 1);
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < strlen1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		p[i + strlen1] = s2[i];
	}
	p[strlen1 + n] = '\0';

	return (p);
}
