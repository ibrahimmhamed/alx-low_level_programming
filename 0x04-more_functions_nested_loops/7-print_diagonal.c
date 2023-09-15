#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n:  is the number of times the character \ should be printed.
*/

void print_diagonal(int n)
{
	int x, y;

	if (n < 1)
		putchar('\n')

			for (x = 0; x < n; x++)
			{
				for (y = 0; y < n; y++)
				{
					putchar('\\');
				}
				putchar('\n');
			}
}
