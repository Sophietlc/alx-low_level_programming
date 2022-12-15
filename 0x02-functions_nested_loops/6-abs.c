#include "main.h"

/**
 * _abs - checks for a number's absolute value
 *
 * @n: the number to be checked
 *
 * Return: 1 if >0, 0 if ==0, -1 if <0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
