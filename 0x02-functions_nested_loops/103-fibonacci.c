#include <stdio.h>

/**
 * main - Entry point
 * Print the sum of even fibonacci numbers that are less than 4,000,000
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int sum = 0, fn = 0, n1 = 0, n2 = 1;

	while (fn <= 4000000)
	{
		if (fn % 2 == 0)
		{
			sum += fn;
		}
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
	}
	printf("%ld\n", sum);
	return (0);
}
