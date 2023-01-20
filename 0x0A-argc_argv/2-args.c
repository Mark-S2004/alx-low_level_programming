#include <stdio.h>

/**
  * main - Print all received arguments
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
