#include "main.h"


/**
 * find_sqrt - finds square root of n
 *
 * @n: number
 *
 * @a: number to iterate through
 *
 * Return: squareroot of n
 */

int find_sqrt(int n, int a)
{
	if ((a * a) > n)
	{
		return (-1);
	}

	if ((a * a) == n)
	{
		return (a);
	}

	return (find_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - finds the square root of a number
 *
 * @n: number
 *
 * Return: the squqre root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}
