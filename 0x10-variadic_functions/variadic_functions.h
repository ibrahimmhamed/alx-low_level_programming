#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @print: charchter
 * @f: The function associated
*/

typedef struct print
{
	char *c;
	int (*f)(char *, va_list);
} print_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
