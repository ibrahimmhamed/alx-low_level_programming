#include "main.h"

/**
 * _isdigit -  prints the last digit of a number.
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if c is a digit. and 0 otherwise.
*/

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
