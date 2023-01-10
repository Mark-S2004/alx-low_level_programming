#include "main.h"

/**
  * _memset - fills the first @n bytes of the memory area pointed to by @s with the constant byte @b
  * @s: Pointer to character
  * @b: Character to fill the memory
  * @n: Number of bytes to be filled
  * Return: Pointer @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*(s + n) = b;
	}

	return (s);
}
