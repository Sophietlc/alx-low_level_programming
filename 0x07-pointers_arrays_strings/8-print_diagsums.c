#include "main.h"

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

	diagsum1 = 0;

	diagsum2 = 0;

	int row, i;

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
