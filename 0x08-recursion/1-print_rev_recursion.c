#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int i;

	int j;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
		_putchar(s[j]);

	_putchar('\n');
}


