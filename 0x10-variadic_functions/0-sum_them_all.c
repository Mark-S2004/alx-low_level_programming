#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - Sum all its parameters
  * @n: Number of passed integers
  * Return: Sum of params, or 0 (No optional params passed)
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ap;

	if (!n)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
