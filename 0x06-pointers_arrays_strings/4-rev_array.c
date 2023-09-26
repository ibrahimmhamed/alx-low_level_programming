#include "main.h"

/**
 * reverse_array - function that reverses the content of
 * an array of integers
 *
 * @a: pointer
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int x, y;
	char temp;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}
}
