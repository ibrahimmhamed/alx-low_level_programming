#include "main.h"

/**
 * print_most_numbers - prints the numbers, without 2 & 4
*/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			_putchar(x + 48);
	}
	_putchar('\n');
}
