#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : This program prints all possible combinations of digit num.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int x = 0;

	while (x < 9)
	{
		putchar (x + 48);
		putchar (',');
		putchar (' ');
		x++;

	if (x == 9)
		putchar ('9');
	}

	return (0);
}
