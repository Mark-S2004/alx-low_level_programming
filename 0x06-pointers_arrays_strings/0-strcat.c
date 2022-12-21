#include "main.h"

/**
  * _strcat - Append @src string to @dest string
  * @dest: A pointer to string
  * @src: A pointer to string
  * Return: @dest after concatenation
  */
char *_strcat(char *dest, char *src)
{
	short dest_len = 0, src_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	while (*(src + src_len) != '\0')
	{
		*(dest + dest_len + src_len) = *(src + src_len);
		src_len++;
	}
	*(dest + dest_len + src_len) = *(src + src_len);

	return (dest);
}
