#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: pointer to the resulting string (dest)
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	for (c = 0; dest[c]; c++)
		;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
