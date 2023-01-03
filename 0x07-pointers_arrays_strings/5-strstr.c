#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to be checked
 *
 * @needle: substring to be located
 *
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[i])
				{
					k++;
					j++;
				}

				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return ('\0');
}
