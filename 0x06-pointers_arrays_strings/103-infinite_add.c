#include "main.h"

int _atoi(char *s);

/**
  * infinite_add - Add @n1 and @n2 together and store the result in @r buffer
  * @n1: Pointer to a string containing digits
  * @n2: Pointer to a string containing digits
  * @r: Pointer to an empty buffe to store the result in it
  * @size_r: Size of the empty @r buffer
  * Return: @r if the result can be stored in it, otherwise 0
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1i, n2i, res, temp, len = 0, i, start, index = 0;

	/* Convert @n1 and @n2 strings to integers */
	n1i = _atoi(n1);
	n2i = _atoi(n2);
	/* Calculate their sum */
	res = n1i + n2i;

	/* Check if the sum can be stored in r */
	temp = res;
	while (temp)
	{
		temp /= 10;
		len++;
	}
	if (len >= size_r)
	{
		return (0);
	}

	/* Store the sum in r */
	while (size_r--)
	{
		temp = res;
		i = size_r;
		while (i--)
		{
			temp /= 10;
		}
		if (temp)
		{
			start = 1;
		}
		if (start || i == 0)
		{
			r[index] = temp % 10 + '0';
			index++;
		}
	}

	return (r);
}

/**
  * _atoi - Convert a string to an integer
  * @s: Pointer to string that will be converted
  * Return: The converted integer
  */
int _atoi(char *s)
{
	int num = 0, len = 0;

	while (*(s + len) != '\0')
	{
		num = (num * 10) + (*(s + len) - '0');
		len++;
	}

	return (num);
}
