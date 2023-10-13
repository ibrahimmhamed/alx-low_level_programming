#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @arg: a list of argument
*/

void print_char(va_list ap)
{
	char c = va_arg(ap, int);

	printf("%c", c);
}

/**
 * print_int - print an integer
 *
 * @arg: a list of argument
*/

void print_int(va_list ap)
{
	int n = va_arg(ap, int);

	printf("%d", n);
}

/**
 * print_float - print a float
 *
 * @arg: a list of argument
*/

void print_float(va_list ap)
{
	float n = va_arg(ap, double);

	printf("%f", n);
}

/**
 * print_string - print a string
 *
 * @arg: a list of argument
*/

void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - a function that prints anything
 *
 * @format: string of character
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_t(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
