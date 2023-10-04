#include "main.h"
#include "stdlib.h"

/**
 * *_strdup - function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if 'str' = NULL
*/

char *_strdup(char *str)
{
	int x, y;
	char *s;

	if (str != NULL)
	{
		for (x = 0; str[x] != '\0'; x++)
			;

		s = malloc(x + 1 * sizeof(char));

		if (s == NULL)
		{
			return (NULL);
		}

		for (y = 0; str[y] != '\0'; y++)
		{
			s[y] = str[y];
		}

		return (s);
	}

	return (NULL);
}
