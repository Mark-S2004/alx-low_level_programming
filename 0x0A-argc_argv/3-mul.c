#include <stdlib.h>
#include <stdio.h>

/**
  * main - Multiply two numbers
  * @argc: Argument count
  * @argv: Argument vector
  * Return: 0 if two numbers are passed as arguments (Success), 1 otherwise
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
