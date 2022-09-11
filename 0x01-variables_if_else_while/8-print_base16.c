#include <stdio.h>

/**
 * main - Entry point
 * Print all base 16 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
	}
	for (digit = 97; digit < 103; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
