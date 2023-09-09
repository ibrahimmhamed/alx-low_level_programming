#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : This program prints the alphabet in lowercase except q and e.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
