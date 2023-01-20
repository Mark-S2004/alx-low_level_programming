#include <stdlib.h>
#include <stdio.h>

/**
  * main - Add positive numbers
  * @argc: Argument count
  * @argv: Argument vector
  * Return: 0 if all passed arguments are digits (Success), 1 otherwise
  */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		argv++;
		if (**argv < '0' || **argv > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*argv);
	}
	printf("%d\n", sum);

	return (0);
}
