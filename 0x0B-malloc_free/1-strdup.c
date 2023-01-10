#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates the string given as a parameter
 *
 * @str: the string to be duplicated
 *
 * Return: pointer to the duplicate, null otherwise
 */

char *_strdup(char *str)
{
	char *duplicate_string;

	int len;

	int i;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (str[len])
		len++;

	duplicate_string = malloc(sizeof(char) * (len + 1));

	if (duplicate_string == NULL)
		return (NULL);

	i = 0;

	while (i <= len)
	{
		duplicate_string[i] = str[i];
		i++;
	}

	return (duplicate_string);
}
