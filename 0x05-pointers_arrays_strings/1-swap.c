#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: an int as parameter.
 * @b: an int as parameter.
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
