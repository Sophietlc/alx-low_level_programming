#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 *
 * @argc: counts arguments
 *
 * @argv: points to array of arguments
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
		i++;

	printf("%d\n", i - 1);
	return (0);
}
