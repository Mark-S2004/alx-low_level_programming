#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Assign a random number to the variable n each time it is executed
 * Print last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("%s %d %s %d ", "Last digit of", n, "is", last_digit);
	if (last_digit > 5)
	{
		printf("%s\n", "and is greater than 5");
	} else if (last_digit == 0)
	{
		printf("%s\n", "and is 0");
	} else if (last_digit < 6)
	{
		printf("%s\n", "and is less than 6 and not 0");
	}
	return (0);
}
