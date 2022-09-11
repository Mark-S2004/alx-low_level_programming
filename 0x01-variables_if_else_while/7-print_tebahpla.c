#include <stdio.h>

/**
 * main - Entry point
 * Print lowercase alphabet in reverse on one line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter > 96; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
