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
	unsigned int i;

	char *array;

	i = 0;

	if (i == 0 || array == NULL)
		return (0);

	array = malloc(sizeof(char) * size);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
