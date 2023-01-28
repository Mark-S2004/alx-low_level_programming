#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - Print passed numbers, followed by a new line
  * @separator: String to be printed between numbers
  * @n: Number of integers passed
  * Return: None
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (!n)
	{
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == n - 1)
		{
			printf("\n");
		} else if (separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
}
