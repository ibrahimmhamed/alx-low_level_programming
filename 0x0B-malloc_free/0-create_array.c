#include "main.h"
#include "stdlib.h"

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
	char *s;
	unsigned int x = 0;

	if (size != 0)
	{
		s = malloc(sizeof(c) * size);

		if (s == NULL)
		{
			return (NULL);
		}

		while (x < size)
		{
			s[x] = c;
			x++;
		}

		return (s);
	}

	return (NULL);
}
