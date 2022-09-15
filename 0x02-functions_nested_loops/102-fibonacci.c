#include <stdio.h>

/**
 * main - Entry point
 * Print the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int i;
	long int fn, n1 = 0, n2 = 1;

	for (i = 0; i < 50; i++)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		printf("%ld", fn);
		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
