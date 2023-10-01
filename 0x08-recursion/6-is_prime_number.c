#include "main.h"

/**
 * prime_check - check if a number is prime.
 *
 * @n: the number to check.
 * @x: the current divisor to test.
 *
 * Return: 1 if n is aprime number, 0 othewise.
*/

int prime_check(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (x <= 1)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (prime_check(n, x - 1));
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is aprime number.
 *
 * @n: input integer.
 *
 * Return: 1 if n is aprime number, 0 othewise.
*/

int is_prime_number(int n)
{
	return (prime_check(n, n - 1));
}
