#include <stdio.h>

#include "main.h"

/**
 * print_alphabet_x10 - prints an alphabet in lower case 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char al;

	int i;

	i = '0';
	al = 'a';
	for (i < 10)
	{
		for (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		i++;
	}
	_putchar('\n');
}
