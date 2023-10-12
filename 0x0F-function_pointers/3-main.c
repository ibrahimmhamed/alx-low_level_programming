#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: The number of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptr(a, b);
	printf("%d\n", result);

	return (0);
}
