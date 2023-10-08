#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 *
 * @min: minimum number of array
 * @max: maximum number of array
 *
 * Return: pointer if success,
 * NULL if malloc fails
*/

int *array_range(int min, int max)
{
	int *ptr, x;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; min <= max; x++, min++)
	{
		ptr[x] = min;
	}

	return (ptr);
}
