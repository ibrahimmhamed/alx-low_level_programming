#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description : prints the alphabet, in lowercase by _putchar.
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
