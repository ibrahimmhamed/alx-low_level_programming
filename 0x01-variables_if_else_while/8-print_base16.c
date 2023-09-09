#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : This program prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char x = 0;
	char y = 'a';

	while (x <= 9)
	{
		putchar (x + 48);
		x++;
	}
	while (y <= 'f')
	{
		putchar (y);
		y++;
	}
	putchar ('\n');

	return (0);
}
