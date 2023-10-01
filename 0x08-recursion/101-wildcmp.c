#include "main.h"

/**
 * wildcmp - function that compares two strings.
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 *
 * Return: 1 if the strings are considered identical, 0 otherwise.
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}

		if (*s1 != '\0')
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}

	return (0);
}
