#include "main.h"
#include <stdlib.h>

/**
  * _realloc - Reallocate a memory block
  * @ptr: Pointer to old memory
  * @old_size: Size of old memory
  * @new_size: Size of new memory
  * Return: ptr of new memory, or NULL if it fails
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr && !new_size)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(new_size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
