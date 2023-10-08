#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: the maximum number of bytes from s2
 *
 * Return: pointer if success,
 * NULL if the function fails.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';

	return (ptr);
}
