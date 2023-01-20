#include <stdio.h>

/**
  * main - Print program name followed by a new line
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;

	return (0);
}
