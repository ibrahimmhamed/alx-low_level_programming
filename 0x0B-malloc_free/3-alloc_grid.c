#include "main.h"
#include "stdlib.h"

/**
 * **alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: input integer
 * @height: input integer
 *
 * Return: NULL if width or height is 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int **str, x, y;

	str = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || str == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			str[x] = malloc(sizeof(int) * width);
			if (str[x] == NULL)
			{
				while (x >= 0)
				{
					free(str[x]);
					x--;
				}
				free(str);
				return (NULL);
			}
			for (y = 0; y < width; y++)
			{
				str[x][y] = 0;
			}
		}
		return (str);
	}
}
