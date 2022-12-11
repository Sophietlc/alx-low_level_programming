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

	for (ch = "a", ch <= "z", ch++)
	{
		putchar(ch);
	}

	return (0);
}
