#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 *
 * @x: 1st num
 * @y: 2nd num
 *
 * Return: -1 if y lower than 0,
 * 1 if y equal 0,
 * the value of x raised to the power of y.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (n * _pow_recursion(x, y - 1));
	}
}
