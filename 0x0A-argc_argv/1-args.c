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

int main(int argc, char *argv)
{
	int i;

	for (i = 1; i <= argc)
		i++;

	printf("%d\n", i);
	return (0);
}
