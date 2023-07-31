#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int r;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (r = 0; r < size; r++)
	{
		sum += a[(size * r) + r];
		sum1 += a[(size * (r + 1)) - (r + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
