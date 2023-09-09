#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : This program prints the lowercase alphabet in reverse.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar (x);
		x--;
	}
	putchar ('\n');

	return (0);
}
