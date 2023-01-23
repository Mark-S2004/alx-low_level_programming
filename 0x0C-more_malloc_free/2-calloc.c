#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocate memory for an array of
  * @nmemb elements of @size bytes each
  * @nmemb: Number of elements in array
  * @size: Size of each element in bytes
  * Return: Pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (!p)
	{
		free(p);
		return (NULL);
	}

	return (p);
}
