#include "main.h"
#include "stdlib.h"

/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer str if success, otherwise NULL
*/

char *str_concat(char *s1, char *s2)
{
	int x, y, z;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;

	z = x + y;
	str = malloc(sizeof(char) * (z + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < x; i++)
	{
		str[i] = s1[i];
	}

	for (int i = 0; i < y; i++)
	{
		str[i + x] = s2[i];
	}
	str[z] = '\0';

	return (str);
}
