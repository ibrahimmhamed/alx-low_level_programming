#include "main.h"

/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: pointer to the charachter to search
 * @needle: pointer to the charchter to search in
 *
 * Return: pointer to the beginning of the located substring,
 * or (NULL) if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;
	char *p;

	for (x = 0; needle[x] != '\0'; x++)
	{
		for (y = 0; haystack[y] != '\0'; y++)
		{
			if (needle[x] == haystack[y])
			{
				p = &needle[x];
				return (p);
			}
		}
	}

	return ('\0');
}
