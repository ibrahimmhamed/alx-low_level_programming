#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 *
 * @n: takes input from other functions.
 *
 * Return: 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
