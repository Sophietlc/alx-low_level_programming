#include "main.h"

/**
 * print_numbers - prints 0-9 followed by a newline
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9;)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
