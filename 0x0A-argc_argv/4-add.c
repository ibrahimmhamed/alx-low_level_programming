#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 *
 * @argc: The number of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 1 if one of the number contains symbols that are not digits,
 * otherwise 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
		{
			if (*x < 48 || *x > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
