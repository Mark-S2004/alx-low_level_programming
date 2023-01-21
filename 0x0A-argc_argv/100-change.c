#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print minimum number of coins to make change for an amount of money
  * @argc: Argument count
  * @argv: Argument vector
  * Return: 0 if one digit is passed as argument (Success), 1 otherwise
  */
int main(int argc, char *argv[])
{
	int count = 0, cents, coins[] = {25, 10, 5, 2, 1}, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents - coins[i] >= 0)
		{
			cents -= coins[i];
			count++;
		} else
		{
			i++;
		}
	}
	printf("%d\n", count);

	return (0);
}
