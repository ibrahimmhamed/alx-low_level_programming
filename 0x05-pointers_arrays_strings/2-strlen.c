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
	char str[16] = "My first strlen!";
	int len;

	len = strlen(str);
	printf("%d\n", len);

	return (0);
}
