#include "main.h"

/**
  * _strncpy - Copy the string pointed to by @src, including the
  * terminating null byte ('\0'), to the buffer pointed to by @dest.
  * @dest: Pointer to buffer
  * @src: Pointer to string
  * @n: Integer of the bytes to copy from @src
  * Return: @dest
  */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
