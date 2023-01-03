#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string to be checked
 *
 * @accept: substring being checked for
 *
 * Return: pointer to first match, null if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}

			j++;
		}

		i++;
	}
	return ('\0');
}
