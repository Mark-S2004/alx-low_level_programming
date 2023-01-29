#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - Print anything separated by comma, followed by a new line
  * @format: List of types of arguments passed to the function
  * Return: None
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	unsigned int i = 0, strlength = 0;

	while (format[strlength] != '\0')
	{
		strlength++;
	}
	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				break;
		}
		if (i < strlength - 1 &&
				(format[i] == 'c' || format[i] == 'i' ||
				 format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
