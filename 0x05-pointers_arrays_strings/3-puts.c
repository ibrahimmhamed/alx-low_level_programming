#include "main.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line.
 *
 * @str: an str parameter to print.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
