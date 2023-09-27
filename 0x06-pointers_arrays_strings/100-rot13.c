#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @str: pointer
 *
 * Return: (str)
*/

char *rot13(char *str)
{
	int x, y;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (str[x] == a[y])
			{
				str[x] = b[y];
				break;
			}
		}
	}

	return (str);
}
