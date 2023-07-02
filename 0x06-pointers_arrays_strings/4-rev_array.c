#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an array of ints
 *
 * @a: the array
 *
 * @n: number of elements in the array
 *
 * Return: the reversed array
 */

void reverse_array(int *a, int n)
{
	int idx = n - 1;
	int b[n];
	int i;

	i = 0;

	while (i < idx)
	{
		temp = a[i];
		a[i] = a[idx];
		a[idx] = temp;
		i++;
		idx--;
	}
	return (a);
}
