#include "main.h"

/**
  * _memcpy - Copy @n bytes from memory are @src to memory area @dest
  * @dest: Pointer to a character that will receive copied bytes
  * @src: Pinter to a character to copy to @dest
  * @n: Number of bytes to copy from @src to @dest
  * Return: @dest after the new character/s were copied to
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}

	return (dest);
}
