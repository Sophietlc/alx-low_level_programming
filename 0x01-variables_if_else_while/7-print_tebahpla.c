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

	ch = 'z';

	while ch <= 'a'
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
