#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to be checked
 *
 * @accept: prefix substring
 *
 * Return: number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != 32)
		{
			if (s[i] == accept[j])
			{
				k++;
			}

			j++;
		}

		i++;
	}
	return (k);
}
