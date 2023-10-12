#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 *
 * @name: name of the string
 * @f: pointer to a function that prints the name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
