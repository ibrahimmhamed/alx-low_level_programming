#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : This program prints the alphabet in lowercase.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
