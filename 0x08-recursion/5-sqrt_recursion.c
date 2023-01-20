#include "main.h"

/**
  * try_nums - Calculate natural square root of a number
  * @i: Sqrt of @n
  * @n: Integer to sqrt
  * Return: @i
  */
int try_nums(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (try_nums(n, i + 1));
}

/**
  * _sqrt_recursion - Calculate natural square root of a number
  * @n: Integer to sqrt
  * Return: sqrt(@n)
  */
int _sqrt_recursion(int n)
{
	return (try_nums(n, 1));
}
