#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of the array
 *
 * @c: the char in the array
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *arr;

	i = 0;

	if (i == 0)
		return (0);

	arr = malloc(sizeof(char) * size);

	while (i < (int)size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
