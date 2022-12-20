#include "main.h"

/**
  * rev_string - Reverse a string
  * @s: Pointer to a string to be reversed
  * Return: None
  */
void rev_string(char *s)
{
	short len = 0, i;
	char temp;

	while (*(s + len) != 0)
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (len - 1 - i));
		*(s + (len - 1 - i)) = temp;
	}
}
