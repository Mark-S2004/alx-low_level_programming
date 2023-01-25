#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Dog attributes
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  *
  * Description: This Structure has attributes of a dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
