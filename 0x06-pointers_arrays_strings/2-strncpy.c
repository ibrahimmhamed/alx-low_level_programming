#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: pointer
 * @src: pointer
 * @n: most n bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; i < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
