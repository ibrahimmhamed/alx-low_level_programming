#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string
 * @n: num of integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
