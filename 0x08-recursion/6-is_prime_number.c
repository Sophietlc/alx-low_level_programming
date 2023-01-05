#include "main.h"

/**
 * find_prime - determines if number is prime
 *
 * @n: number tobe checked
 *
 * @a: divisor to iterate
 *
 * Return: 1 if prime, 0 otherwise
 */

int find_prime(int n, int a)
{
	if (n <= 1 || n % a == 0)
	{
		return (0);
	}

	if (n == a)
	{
		return (1);
	}

	if (n > a)
	{
		find_prime(n, a + 1);
	}
	return (1);
}

/**
 * is_prime_number- finds if number is prime
 *
 * @n: number
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
