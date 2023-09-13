#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : prints all possible different combinations of two digits.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar(x + 48);
			putchar(y + 48);
			if (x != 8 || y != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
