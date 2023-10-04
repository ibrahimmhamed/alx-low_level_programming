#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: The number of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 1 if the program does not receive two arguments,
 * otherwise 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, sum;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 * num2;

		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
