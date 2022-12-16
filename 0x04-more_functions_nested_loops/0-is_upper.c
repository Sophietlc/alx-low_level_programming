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
	if (c >= 'Z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}