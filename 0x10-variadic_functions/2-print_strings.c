#include "variadic_functions.h"
#include "stdio.h"
#include <stdarg.h>

/**
  * print_strings - Print passed strings, followed by a new line
  * @separator: String to be printed between the strings
  * @n: Number of strings passed to the function;
  * Return: None
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (!n)
	{
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str)
		{
			printf("%s", str);
		} else
		{
			printf("(nil)");
		}
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
