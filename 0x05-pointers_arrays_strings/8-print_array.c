#include "main.h"

#include <stdio.h>

/**
 * print_array - prints n elements of an array
 *
 * @a: the array
 *
 * @n: the number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n-1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
