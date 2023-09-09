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
		printf("%d", x);
		x++;
	}
	putchar('\n');

	return (0);
}
