#include "main.h"

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of array
 * @c: the character to initialize the array
 *
 * Return: NULL if size = 0,
 * pointer 'p' to the array,
 * or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		p[x] = c;
	}
	return (p);
}
