#include "main.h"

/**
 * _isupper - checks if c is uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 68 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
