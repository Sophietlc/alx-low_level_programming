#include "main.h"

/**
 * print_last_digit - returns last digit of a number
 *
 * @n: number to be checked
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x *= -1;
	}

	_putchar('0' + n);

	return (x);
}
