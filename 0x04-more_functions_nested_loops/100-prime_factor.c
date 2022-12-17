#include <stdio.h>

int checkPrime(int number);

/**
  * main - Entry point
  * Return: 0 Always (Success)
  */
int main(void)
{
	long number = 612852475143, factor = number;

	while (factor--)
	{
		if (checkPrime(factor) == 0 && number % factor == 0)
		{
			printf("%ld\n", factor);
			break;
		}
	}

	return (0);
}

/**
  * checkPrime - Check if the number is prime or not
  * @number: The number to be checked
  * Return: 0 if the number is prime, 1 otherwise
  */
int checkPrime(int number)
{
	int count = 0, i;

	for (i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			count = 1;
			break;
		}
	}

	if (number == 1)
	{
		count = 1;
	}

	return (count);
}
