#include "main.h"

/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a: pointer
 * @size: the size of square matrix
*/

void print_diagsums(int *a, int size)
{
	int x, sum1, sum2;

	x = 0;
	sum1 = 0;
	sum2 = 0;

	while (x < size)
	{
		sum1 += a[x * size + x];
		sum2 += a[x * size + (size - 1 - x)];
		x++;
	}

	printf("%d, %d\n", sum1, sum2);
}
