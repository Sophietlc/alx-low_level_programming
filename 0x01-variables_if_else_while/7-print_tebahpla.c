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
	char ch;

	char new;

	new = '\n';

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar(new);

	return (0);
}
