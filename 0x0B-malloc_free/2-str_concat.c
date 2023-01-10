#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in a duplicate string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to duplicate string, NULL if unsucessful
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len1, len2, len3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0, len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len3 = len1 + len2;
	s3 = malloc(sizeof(char) * (len3 + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0, j = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i <= len3)
	{
		s3[i] = s2[j];
		i++, j++;
	}
	return (s3);
}
