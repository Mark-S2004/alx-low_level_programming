#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - Create a new structure dog
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  * Return: Pointer to new structure dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
