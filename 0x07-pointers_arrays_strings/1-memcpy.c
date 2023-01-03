#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area being copied to
 *
 * @src: memory area being copied from
 *
 * @n: number of bytes being copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	for (i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest)
}
