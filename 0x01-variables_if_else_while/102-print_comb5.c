#include <stdio.h>

/**
 * main - Entry point
 * Print all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	short digit1_1, digit1_2, digit2_1, digit2_2, temp;

	for (digit1_1 = 48; digit1_1 <= 57; digit1_1++)
	{
		for (digit1_2 = 48; digit1_2 <= 56; digit1_2++)
		{
			for (digit2_1 = digit1_1; digit2_1 <= 57; digit2_1++)
			{
				if (digit2_1 == digit1_1)
				{
					temp = digit1_2 + 1;
				} else
				{
					temp = 0;
				}
				for (digit2_2 = temp; digit2_2 <= 57; digit2_2++)
				{
					putchar(digit1_1);
					putchar(digit1_2);
					putchar(' ');
					putchar(digit2_1);
					putchar(digit2_2);
					if (digit1_1 + digit1_2 + digit2_1 + digit2_2 != 227)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
