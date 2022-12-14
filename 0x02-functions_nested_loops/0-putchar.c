#include <stdio.h>

#include "main.h"

#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int _putchr(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchr('_');
	_putchr('p');
	_putchr('u');
	_putchr('t');
	_putchr('c');
	_putchr('h');
	_putchr('a');
	_putchr('r');
	_putchr('\n');

	return (0);
}
