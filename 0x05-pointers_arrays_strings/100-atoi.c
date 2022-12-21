#include "main.h"

/**
  * _atoi - Convert a string to an integer
  * @s: Pointer to string that will be converted
  * Return: The converted integer
  */
int _atoi(char *s)
{
	int num = 0, len = 0, neg = 0;

	while (*(s + len) != '\0')
	{
		if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			num = (num * 10) + (*(s + len) - '0');
			if (*(s + len - 1) == '-')
			{
				neg = 1;
			}
		}
		if (num && ((*(s + len) < '0') || (*(s + len) > '9')))
		{
			break;
		}
		len++;
	}
	if (neg)
	{
		num *= -1;
	}

	return (num);
}
