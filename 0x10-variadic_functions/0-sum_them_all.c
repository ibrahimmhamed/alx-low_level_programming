#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: num of integer
 *
 * Return: 0 if n equal 0, otherwise sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
