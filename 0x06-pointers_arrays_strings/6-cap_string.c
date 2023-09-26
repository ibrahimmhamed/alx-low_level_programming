#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: pointer
 *
 * Return: (str)
*/

char *cap_string(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			if (x == 0)
			{
				str[x] -= 32;
			}
			if (str[x - 1] == 32 || str[x - 1] == 9 || str[x - 1] == 10 ||
				str[x - 1] == 44 || str[x - 1] == 59 || str[x - 1] == 46 ||
				str[x - 1] == 33 || str[x - 1] == 63 || str[x - 1] == 34 ||
				str[x - 1] == 40 || str[x - 1] == 41 || str[x - 1] == 123 ||
				str[x - 1] == 124)
			{
				str[x] -= 32;
			}
		}
		x++;
	}
	return (str);
}
