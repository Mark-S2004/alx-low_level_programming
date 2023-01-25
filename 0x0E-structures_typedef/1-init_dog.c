#include "dog.h"

/**
  * init_dog - Initialize a variable of type struct dog
  * @d: Pointer to variable of type struct dog
  * @name: Name memeber of structure dog
  * @age: Age memeber of structure dog
  * @owner: Owner name memeber of structure dog
  * Return: None
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
