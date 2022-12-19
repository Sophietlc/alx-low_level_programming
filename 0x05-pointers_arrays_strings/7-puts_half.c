#include "main.h"
/**
 * puts_half - prints the last half of a string
 *
 * @str: the string to be checked
 */

void puts_half(char *str)
{
	int i;

	int n;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
	}

	else
	{
		n = (i - 1) / 2;
	}

	for (; n <= i; n++)
	{
		_putchar(str[(n - 1)]);
	}

	_putchar('\n');
}
