#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of
  * a square matrix of integers
  * @a: Square matrix of integers
  * @size: Number of rows or columns of the matrix
  * Return: None
  */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = size;

	while (i--)
	{
		sum1 += *(a + i + i * size);
		sum2 += *(a + (size - i - 1) + i * size);
	}
	printf("%d, %d\n", sum1, sum2);
}
