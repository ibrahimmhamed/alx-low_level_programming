#include "main.h"

/**
 * _isalpha - check for alphabetic character.
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if c is a letter, and 0 otherwise.
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c >= 'Z')
		return (1);
	return (0);
}
