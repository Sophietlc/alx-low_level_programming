#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: string to be appended to
 *
 * @src: string to append
 *
 * @n: number of bytes from src to append
 *
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;


	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j != n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}


