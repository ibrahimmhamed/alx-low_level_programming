#include "main.h"

/**
 * print_rev - prints a string, followed by a newline.
 *
 * @s: an string parameter to print.
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	while (*s > 0)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
