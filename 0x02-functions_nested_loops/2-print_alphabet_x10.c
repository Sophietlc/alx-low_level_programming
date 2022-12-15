#include "main.h"

/**
 * print_alphabet_x10 - prints an alphabet in lower case 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	char alpha;

	alpha = 'a';

	i = '0';
	while (i <= '9')
	{
		for (alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		i++;
	}
	_putchar('\n');
}
