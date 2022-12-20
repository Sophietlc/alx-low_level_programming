#include "main.h"

/**
 * print_line - prints the '-' character
 *
 * @n: the number of times - is printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
