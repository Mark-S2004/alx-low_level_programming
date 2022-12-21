#include "main.h"

/**
  * _strncat - Append @n bytes from @src string to @dest string
  * @dest: Pointer to string
  * @src: Pointer to string
  * @n: Integer of the number of bytes from @src to be appended
  * Return: @dest after concatentation
  */
char *_strncat(char *dest, char *src, int n)
{
	short dest_len = 0, i;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n; i++)
	{
		*(dest + dest_len + i) = *(src + i);
		if (*(src + i) == '\0')
		{
			break;
		}
	}

	return (dest);
}
