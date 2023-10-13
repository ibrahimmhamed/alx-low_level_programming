#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: string
 * @n: num of integer
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	char *p;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		p = va_arg(ap, char*);

		if (p != NULL)
		{
			printf("%s", x);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && x != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
