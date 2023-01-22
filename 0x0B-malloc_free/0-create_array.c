#include "main.h"
#include <stdlib.h>

/**
  * create_array - Create array of chars and initialize it with @c
  * @size: Array size
  * @c: Character to initialize the array with
  * Return: Pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
