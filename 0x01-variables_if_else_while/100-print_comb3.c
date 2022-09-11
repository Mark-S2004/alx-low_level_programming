#include <stdio.h>

/**
 * main - Entry point
 * Print all possible unique combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int first_digit;
	short int second_digit;

	for (first_digit = 48; first_digit < 57; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 58; second_digit++)
		{
			putchar(first_digit);
			putchar(second_digit);
			if (!(first_digit == 56 && second_digit == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
