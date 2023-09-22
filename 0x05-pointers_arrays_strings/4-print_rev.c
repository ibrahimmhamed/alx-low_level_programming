#include "main.h"

/**
 * print_rev - prints a string, followed by a newline.
 *
 * @s: an string parameter to print.
*/

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x;

	while (y >= 0)
	{
		_putchar(s[y]);
		y--;
	}
	_putchar('\n');
}
