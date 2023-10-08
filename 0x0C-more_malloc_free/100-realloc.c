#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer if new_size equal old_size,
 * NULL if new_size equal 0 or ptr isn't NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *str;

	if (new_size > old_size)
	{
		str = malloc(new_size);
		return (str);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
