#include "main.h"

/**
 * print_sign - checks if a number is positive, negative or zero
 *
 * @n: the number to be checked
 *
 * Return: 1 if >0, 0 if ==0, -1 if <0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
