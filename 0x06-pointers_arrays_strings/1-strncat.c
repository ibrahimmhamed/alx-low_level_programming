#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer
 * @src: pointer
 * @n: most n bytes from @src
 *
 * Return: pointer to the resulting string (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, x;

	for (c = 0; dest[c]; c++)
		;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[c + x] = src[x];
	dest[c + x] = '\0';

	return (dest);
}
