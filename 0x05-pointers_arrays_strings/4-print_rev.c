#include "main.h"

/**
 * print_rev - prints a string, followed by a newline.
 *
 * @s: an string parameter to print.
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}

	while (x > 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
