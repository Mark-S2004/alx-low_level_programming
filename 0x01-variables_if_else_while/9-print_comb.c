#include <stdio.h>

/**
 * main - Entry point
 * Print all single digit numbers separated by "," and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
