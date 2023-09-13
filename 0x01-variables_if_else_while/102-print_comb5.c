#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + 48);
			putchar((x % 10) + 48);
			putchar(' ');
			putchar((y / 10) + 48);
			putchar((y % 10) + 48);

			if (x == 98 && y == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
