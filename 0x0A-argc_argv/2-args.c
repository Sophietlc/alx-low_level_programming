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

int main(int argc, char *argv)
{
	int i;

	for (i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
