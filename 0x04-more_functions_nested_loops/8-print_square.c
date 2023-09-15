#include "main.h"

/**
 * print_square - prints a square.
 *
 * @size: is the size of the square.
*/

void print_square(int size)
{
	int x, y;

	if (size < 1)
		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
