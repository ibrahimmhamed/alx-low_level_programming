#include "3-calc.h"

/**
 * op_add - functoin that adds two integer
 *
 * @a: 1st input
 * @b: 2nd input
 *
 * Return: the sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that gets the difference between two integer
 *
 * @a: 1st input
 * @b: 2nd input
 *
 * Return: the difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integer
 *
 * @a: 1st input
 * @b: 2nd input
 *
 * Return: the product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides @a by @b
 *
 * @a: 1st input
 * @b: 2nd input
 *
 * Return: the result
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that gets the reminder of
 * the division between @a and @b
 *
 * @a: 1st input
 * @b: 2nd input
 *
 * Return: the remainder
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
