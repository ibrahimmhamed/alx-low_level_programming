#include "main.h"

/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: pointer to the string
 * @needle: pointer to substring
 *
 * Return: pointer to the beginning of the located substring,
 * or (NULL) if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}

	return ('\0');
}
