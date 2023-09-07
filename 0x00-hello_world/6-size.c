#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : This is C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return: 0 (Success)
*/


int main(void)
{
	printf("Size of a", sizeof(char));
	printf("Size of a", sizeof(int));
	printf("Size of a", sizeof(long int));
	printf("Size of a", sizeof(long long int));
	printf("Size of a", sizeof(float));
	return (0);
}
