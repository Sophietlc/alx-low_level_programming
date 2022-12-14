#include <stdio.h>

#include "main.h"

/**
 *print_alphabet - Program prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char first;

	first = 'a';
	while (first <= 'z')
	{
		_putchar(first);
		first++;
	}
	_putchar('\n');
}
