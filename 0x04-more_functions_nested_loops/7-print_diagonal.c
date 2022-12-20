#include "main.h"

/**
 * print_diagonal - printsa diagonal line
 *
 * @n: the number of times '\' is printed
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');

		if ( i != (n -1))
		{
			_putchar('\n');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
