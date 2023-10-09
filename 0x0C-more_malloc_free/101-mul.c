#include "main.h"
#include <stdlib.h>

/**
 * is_digit - function that check if a string contains only digits.
 *
 * @str: input string
 *
 * Return: 1 if the strings are digit, 0 otherwise
*/

int is_digit(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - multiply two integers.
 *
 * @num1: 1st integer
 * @num2: 2nd integer
 *
 * Return: The result of the multiplication
*/

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * print_error - Print an error message.
 *
 * Return: nothing
*/

void print_error(void)
{
	int x;
	char error[] = "Error\n";

	for (x = 0; error[x] != '\0'; x++)
	{
		_putchar(error[x]);
	}
}

/**
 * main - program that multiplies two positive numbers.
 *
 * @argc: The number of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 0 (success), 98 (error)
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;
	char *s1, *s2;

	if (argc != 3)
	{
		print_error();
		return (98);
	}

	s1 = argv[1];
	s2 = argv[2];

	if (!is_digit(s1) || !is_digit(s2))
	{
		print_error();
		return (98);
	}

	num1 = atoi(s1);
	num2 = atoi(s2);

	if (num1 < 0 || num2 < 0)
	{
		print_error();
		return (98);
	}

	mul = multiply(num1, num2);

	printf("%d\n", mul);

	return (0);
}
