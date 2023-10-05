#include "main.h"
#include "stdlib.h"

/**
 * *argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: integer
 * @av: pointer to array
 *
 * Return: NULL if ac == 0 or av == NULL,
 * pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int i, nc, x, y;
	char *str;
	x = y = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (nc = 0; av[i][nc]; nc++)
			y++;
	}

	y += ac;

	str = malloc(sizeof(char) * y + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (nc = 0; av[i][nc]; nc++)
		{
			str[x] = av[i][nc];
			x++;
		}
		if (str[x] == '\0')
		{
			str[x++] = '\n';
		}
	}
	return (str);
}
