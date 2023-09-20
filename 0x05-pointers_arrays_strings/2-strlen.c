#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 *
 * @s: an str as parameter.
 *
 * Return: 0 (Success)
*/

int _strlen(char *s)
{
	int len = strlen(s);
	printf("%d\n", len);
	return 0;
}

/**
 * main - Entry point
 *
 * Return: 0 (Success)
*/

int main()
{
    char str[16] = "My first strlen!";
    _strlen(str);
    return 0;
}
