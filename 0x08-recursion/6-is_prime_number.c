#include "main.h"

/**
  * try_nums - Return 1 if @n is prime, 0 otherwise
  * @n: Integer to check
  * @i: Integer to check if it is a factor of @n
  * Return: 1 or 0
  */
int try_nums(int n, int i)
{
	if (n % i == 0 || n <= 0 || n == 1)
	{
		return (0);
	}
	if (i > n / 2 || n == 2)
	{
		return (1);
	}
	return (try_nums(n, i + 1));
}

/**
  * is_prime_number - Return 1 if @n is prime, 0 otherwise
  * @n: Integer to check
  * Return: 1 or 0
  */
int is_prime_number(int n)
{
	return (try_nums(n, 2));
}
