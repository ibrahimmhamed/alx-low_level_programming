#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 *
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: unsigned number of bytes to copy
 *
 * Return: pointer to (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
