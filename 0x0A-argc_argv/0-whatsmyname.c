#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program
 *
 * @argc: counts arguments
 *
 * @argv: points to array of arguments
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
