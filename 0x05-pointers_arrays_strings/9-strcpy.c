#include "main.h"

/**
  * *_strcpy -  Copy the string pointed to by src,
  * including the terminating null byte (\0), to the buffer pointed to by dest
  * @dest: Pointer to string that the @src string will be copied to
  * @src: Pointer to string that will be copied to @dest
  * Return: Pointer to string of @dest
  */
char *_strcpy(char *dest, char *src)
{
	short src_len = 0, i;

	while (*(src + src_len) != '\0')
	{
		src_len++;
	}

	for (i = 0; i <= src_len; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
