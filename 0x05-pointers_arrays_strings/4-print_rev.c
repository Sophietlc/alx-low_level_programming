#include "holberton.h"

#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 *
 * @s: The string to print
 *
 */

void print_rev(char *s)
{

	int x = 0;

	while (s[c] != '\0')
	{
		x++;
	}

	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}


