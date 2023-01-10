#include "main.h"

/**
  * _strstr - Find the first occurrence of the substring @needle
  * in the string @haystack
  * @haystack: String to search in for the substring @needle
  * @needle: String to search for in @haystack
  * Return: Pointer to the beginning of the substring or NULL otherwise
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				break;
			}
		}
		if (*(haystack + i + j) != *(needle + j))
		{
			continue;
		}
		return (haystack + i);
	}

	return (0);
}
