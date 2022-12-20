#include "main.h"

/**
  * _strlen - Retrun the length of a string
  * @s: String to return its length
  * Return: Length of @s
  */
int _strlen(char *s)
{
	char character;
	short len = 0;

	character = *s;
	while (character != '\0')
	{
		len++;
		character = *(s + len);
	}

	return (len);
}
