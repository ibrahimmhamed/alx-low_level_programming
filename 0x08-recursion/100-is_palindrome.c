#include "main.h"
#include <string.h>

/**
 * check_palindrome - check if a string is a palindrome or not.
 *
 * @s: The string to check.
 * @start: The start index.
 * @end: The end of index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - check if a string is a palindrome or not.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, length - 1));
}
