#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Free a pointer to structure dog from memory
  * @d: Pointer to struct dog
  * Return: None
  */
void free_dog(dog_t *d)
{
	free(d);
}
