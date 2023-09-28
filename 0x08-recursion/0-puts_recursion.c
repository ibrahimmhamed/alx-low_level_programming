#include "main.h"

/**
 * _puts_recursion - function that prints a string.
 *
 * @s: string.
 *
 * Return: stop recursion if s = NULL
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else 
	{
	printf("%c", *s);
	printf("\n");
	_puts_recursion(s + 1);
	}
}
