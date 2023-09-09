#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : This program prints all single digit numbers of base 10.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);
		x++;
	}
	putchar('\n');

	return (0);
}
