#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: the number of elements
 * @size: the size of element
 *
 * Return: pointer if success,
 * NULL if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x, total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < total_size; x++)
	{
		ptr[x] = 0;
	}

	return (ptr);
}
