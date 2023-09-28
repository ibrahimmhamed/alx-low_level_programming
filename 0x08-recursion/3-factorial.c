#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: input num.
 *
 * Return: -1 if n lower than 0,
 * 1 if n equal 0,
 * factorial of a given number.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
