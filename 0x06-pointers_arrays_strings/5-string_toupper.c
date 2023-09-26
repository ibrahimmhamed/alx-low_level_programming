#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 *
 * @str : pointer
 *
 * Return: (str)
*/

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
