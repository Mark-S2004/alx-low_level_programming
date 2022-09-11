#include <stdio.h>

/**
 * main - Entry point
 * Print all base 10 single digit numbers in one line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');
	return (0);
}
