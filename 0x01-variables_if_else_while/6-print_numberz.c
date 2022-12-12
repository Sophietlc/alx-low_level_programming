#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program that prints all the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++
	}

	putchar('\n');

	return (0);
}
