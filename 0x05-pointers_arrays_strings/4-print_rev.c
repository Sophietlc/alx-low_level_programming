#include "main.h"

#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 *
 * @s: The string to be printed
 */

void print_rev(char *s)
{

	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}


