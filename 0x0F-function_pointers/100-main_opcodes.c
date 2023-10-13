#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 *
 * @argc: the number of command-line arguments
 * @argv: array of strings
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int x, num;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < num; x++)
	{
		printf("%02hhx", *((char *)main + x));
		if (x < num - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
