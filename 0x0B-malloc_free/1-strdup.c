#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Return a pointer to a copy of @str
  * @str: String to copy to a new memory location
  * Return: Pointer to @str copy or it fails
  */
char *_strdup(char *str)
{
	char *p;
	int strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	p = malloc(sizeof(char) * (strlen + 1));
	if (!p || !strlen)
	{
		return (NULL);
	}
	while (strlen--)
	{
		p[strlen] = str[strlen];
	}

	return (p);
}
