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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
