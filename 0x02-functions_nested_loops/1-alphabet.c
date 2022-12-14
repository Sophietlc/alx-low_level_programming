#include <stdio.h>

#include "main.h"

/**
 * main - Entry point
 *
 * Description: Program prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet (void)
{
	char first;
	first = 'a';
	for (first <= 'z';)
	{
		_putchar(first);
		first++;
	}
	_putchar('\n');

int main(void)
{
	print_alphabet();
	return (0);
}
