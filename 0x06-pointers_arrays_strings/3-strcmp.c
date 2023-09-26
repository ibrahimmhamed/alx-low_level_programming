#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: nothing
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0, y;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			y = s1[x] - s2[x];
			break;
		}
		else
		{
			y = s1[x] - s2[x];
		}
		x++;
	}
}
