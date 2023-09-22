#include "main.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line.
 *
 * @str: an str as parameter.
 *
 * Return: 0 (Success)
*/

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

