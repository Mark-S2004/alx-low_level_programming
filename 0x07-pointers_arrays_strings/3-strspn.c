#include "main.h"

/**
  * _strspn - Return the number of bytes in the initial segment of @s
  * which consist only of bytes from @accept
  * @s: Pointer to string to check in it
  * how many many accept bytes does it contain
  * @accept: Pointer to string of accept bytes to count in @s
  * Return: Number of accept bytes in @s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, j;

	for (i = 0; *(s + i) != '\0' && *(s + i) != ' '; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
		}
	}

	return (count);
}
