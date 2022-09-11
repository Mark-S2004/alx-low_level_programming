#include <stdio.h>

/**
 * main - Entry point
 * Print alphabet in lowercase, then in uppercase in one line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower < 123; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper < 91; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
