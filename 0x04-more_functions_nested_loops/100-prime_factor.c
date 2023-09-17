#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the largest prime factor of the number 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int x, n;
	x = 612852475143;
	n = 3;

	while (n <= x / 2)
	{
		if (x % n == 0)
			x = x / n;
		else
			n += 2;
	}
	printf("%ld\n", x);

	return (0);
}
