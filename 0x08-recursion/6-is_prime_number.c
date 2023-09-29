#include "main.h"

/**
 * is_prime_number - function that returns 1
 * if the input integer is aprime number.
 *
 * @n: input integer.
 *
 * Return: 1 if the input is aprime number, othewise 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	for (int x = 5; x * x <= n; x += 6)
	{
		if (n % x == 0 || n % (x + 2) == 0)
		{
			return (0);
		}
	}

	return (1);
}
