#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: int array
 * @size: the size of the array
 * @cmp: pointer to a function used to compare integers
 *
 * Return: -1 if no element matches, or if size <= 0
 *
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && size && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
			{
				return (1);
			}
		}
	}

	return (-1);
}
