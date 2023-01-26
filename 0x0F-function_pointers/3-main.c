#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Performs one operation on two integers
  * @argc: Argument count
  * @argv: Argument vector
  * Return: 0 (Success), 98 (@argc is wrong), 99 (operator is invalid),
  * 100 (division by 0)
  */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(num1, num2));

	return (0);
}
