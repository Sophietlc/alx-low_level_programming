#include <stdio.h>

#include "main.h"

/**
 * print_alphabet_x10 - prints an alphabet in lower case 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
