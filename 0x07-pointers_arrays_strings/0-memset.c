#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer to memory area
 *
 * @b: constant byte that fills memory
 *
 * @n: number of bytes of memory to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
