#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @str: string input
 *
 * Return: (str)
*/

char *leet(char *str)
{
	int i, c = 0;
	int lower[] = {'a', 'e', 'o', 't', 'l'};
	int upper[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	while (str[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[c] == lower[i] || str[c] == upper[i])
			{
				str[c] = num[i];
				break;
			}
		}
		c++;
	}
	return (str);
}
