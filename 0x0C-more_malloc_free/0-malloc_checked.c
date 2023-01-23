#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Create pointer to allocated memory
  * @b: Memory size
  * Return: Return pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		free(p);
		exit(98);
	}
	return (p);
}
