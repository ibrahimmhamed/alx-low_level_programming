#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n:  is the number of times the character \ should be printed.
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}

	else
	{
		int x = 0;

		while (x < n)
		{
			putchar('\\');
		}
	}
}
