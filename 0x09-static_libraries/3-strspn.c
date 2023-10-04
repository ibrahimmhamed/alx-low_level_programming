#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: pointer to the string
 * @accept: pointer to the string 's' that contain accept character
 *
 * Return: the number of bytes in the initial segment of 's'
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0' && s[x] != accept[y])
		{
			y++;
		}
		if (accept[y] == '\0')
		{
			return (x);
		}
		x++;
	}
	return (x);
}
