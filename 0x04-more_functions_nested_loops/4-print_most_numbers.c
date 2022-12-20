#include "main.h"

/**
 * print_most_numbers - prints 0-9 except 2,4 followed by a newline
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9;)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
