#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int len;

	int x;
	x = 0;
	int y = len - 1;
	char z;

	while (*s != '\0')
	{
		len++;
		s++;
	}


	while (x < y)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
		x++, y--;
	}
}
