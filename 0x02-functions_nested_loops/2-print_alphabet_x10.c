#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description : prints 10 times the alphabet by _putchar.
*/

void print_alphabet_x10(void)
{
	int ch;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
