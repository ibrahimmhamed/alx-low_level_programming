#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc.
 *
 * @b: the size of memory to allocate
 *
 * Return: pointer to the allocated memory,
 * if malloc fails, the program terminates with status value 98
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
