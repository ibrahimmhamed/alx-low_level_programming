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
	int num1, num2, sum;

	if (argc < 0)
	{
		printf("0\n");
	}
	else if (argc >= 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 + num2;

		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
