#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: The number of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
