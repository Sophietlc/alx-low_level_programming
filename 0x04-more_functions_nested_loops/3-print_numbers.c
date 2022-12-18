#include "main.h"

/**
 * print_numbers - prints 0-9 followed by a newline
 */

void print_numbers(void)
{
	char i;

	i = '0';

	for (i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
