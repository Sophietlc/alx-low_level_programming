#include "main.h"
#include <stdio.h>

/**
 * main - prints the arguments of a program
 *
 * @argc: counts the number of arguments
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
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
