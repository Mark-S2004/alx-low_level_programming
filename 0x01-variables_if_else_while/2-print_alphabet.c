#include <stdio.h>

/**
 * main - Entry point
 * Print the alphabet in lowercase on multiple lines
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter < 123; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
