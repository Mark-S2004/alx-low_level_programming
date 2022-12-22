#include "main.h"

/**
  * leet - Encode a string into 1337
  * @str: Pointer to a string
  * Return: @str after encoding
  */
char *leet(char *str)
{
	char arr[128] = {0};
	short i, index;

	arr[97] = '4';
	arr[65] = '4';
	arr[101] = '3';
	arr[69] = '3';
	arr[108] = '1';
	arr[76] = '1';
	arr[111] = '0';
	arr[79] = '0';
	arr[116] = '7';
	arr[84] = '7';
	for (i = 0; str[i] != '\0'; i++)
	{
		index = str[i];
		if (arr[index])
		{
			str[i] = arr[index];
		}
	}

	return (str);
}
