#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : Program that prints 0-9 separated by commas
 *
 * Return: Always 0 (Success
 */

int main(void)
{
	int a;

	a = '0';

	while (a <= '9')
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');

			putchar(' ');
		}
		a++;
	}
	
	putchar('\n');

	return (0);
}

