#include "main.h"

/**
 * calc_sqrt - calculate the integer square root.
 *
 * @n: The number for which to find the square root.
 * @x: The current guess for the square root.
 *
 * Return: square root if found, or -1 if not found.
*/

int calc_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (calc_sqrt(n, x + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: input num.
 *
 * Return: -1 if n lower than 0,
 * n if n equal 0 & 1,
 * calc_sqrt and start the calculate from 1.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (calc_sqrt(n, 1));
	}
}
