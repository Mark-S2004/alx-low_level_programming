#include <stdio.h>

/**
 * main - Entry point
 * print a string to the standard error
 * Return: Always 1 (Success)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			1,
			59,
			stderr);
	return (1);
}
