#include "main.h"
#include <stdlib.h>

void print_error(void);
int _atoi(char *s);

/**
  * main - Multiply two numbers
  * @argc: Argument count, should be 3
  * @argv: Argument vector, should be filename and two numbers
  * Return: 0 (Success), 98 if number of arguments or arguments are invalid
  */
int main(int argc, char *argv[])
{
	int i, j, num1, num2, mul, strlen = 0, temp;
	char *s;

	/* Check if there is two arguments passed */
	if (argc != 3)
	{
		print_error();
	}
	/* Check if these two arguments are numbers */
	while (--argc)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			if (argv[argc][i] < '0' || argv[argc][i] > '9')
			{
				print_error();
			}
			i++;
		}
	}
	/* Convert passed strings to integers */
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	/* Calculate their product */
	mul = num1 * num2;
	/* Allocate suitable memory block for product string */
	temp = mul;
	while (temp)
	{
		strlen++;
		temp /= 10;
	}
	s = malloc((strlen + 1) * sizeof(char));
	/* Convert product to string */
	i = 0;
	while (mul)
	{
		for (j = i - 1; j >= 0; j--)
		{
			s[j + 1] = s[j];
		}
		temp = mul % 10;
		mul /= 10;
		s[0] = temp + '0';
		i++;
	}
	s[strlen] = '\0';
	/* Print string */
	for (i = 0; i < strlen; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	return (0);
}

/**
  * print_error - Print Error followed by newline and exit with status of 98
  * Return: None
  */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

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
