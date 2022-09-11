#include <stdio.h>

/**
 * main - Entry point
 * Print all possible unique combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int st_digit;
	short int nd_digit;
	short int rd_digit;

	for (st_digit = 48; st_digit < 56; st_digit++)
	{
		for (nd_digit = st_digit + 1; nd_digit < 57; nd_digit++)
		{
			for (rd_digit = nd_digit + 1; rd_digit < 58; rd_digit++)
			{
				putchar(st_digit);
				putchar(nd_digit);
				putchar(rd_digit);
				if (!(st_digit == 55 && nd_digit == 56 && rd_digit == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
