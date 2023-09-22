#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: an array.
 * @n: the number of elements.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
	printf("\n");
}
