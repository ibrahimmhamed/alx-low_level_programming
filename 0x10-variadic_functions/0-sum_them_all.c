#include "variadic_functions.h"

/**
 * print_numbers - function that returns the sum of all its parameters
 *
 * @separator: string
 * @n: num of integer
 *
 * Return:
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int x, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
	{
		sum +=  va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
