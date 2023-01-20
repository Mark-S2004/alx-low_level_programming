#include <stdio.h>

/**
  * main - Print number of arguments passed to the program
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	(void) argv;

	return (0);
}
