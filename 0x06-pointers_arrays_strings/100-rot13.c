#include "main.h"

/**
  * rot13 - Encode a string using rot13
  * @str: Pointer to string
  * Return: @str after encoding
  */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
		} else if (
				(str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z')
				)
		{
			str[i] -= 13;
		}
	}

	return (str);
}
