#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string.
 *
 * @s: string parameter.
*/

void rev_string(char *s)
{
	int x = 0;
	int y = strlen(s) - 1;
	char temp;

	while (x < y)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;

		x++;
		y--;
	}
}
