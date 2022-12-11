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

	char sh;

	char new;

	new = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}


	for (sh = 'A'; sh <= 'z'; sh++)
	{
		putchar(sh);
	}

	putchar(new);

	return (0);
}
