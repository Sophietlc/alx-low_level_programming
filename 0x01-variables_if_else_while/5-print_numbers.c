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

	char new;

	new = '\n';

	for (ch = '0'; ch < '10'; ch++)
	{
		putchar(ch);
	}

	putchar(new);

	return (0);
}
