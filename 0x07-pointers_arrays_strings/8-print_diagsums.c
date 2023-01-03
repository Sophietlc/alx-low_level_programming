#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: the matrix
 *
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int diagsum1;

	int diagsum2;

	int row;

	int i;

	diagsum1 = 0;

	diagsum2 = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagsum1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagsum2 += a[i];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
