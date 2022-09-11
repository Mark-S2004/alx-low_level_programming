#include <stdio.h>

/**
 * main - Entry point
 * Print all base 10 single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
