#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 *
 * @s: an str as parameter.
 *
 * Return: 0 (Success)
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
