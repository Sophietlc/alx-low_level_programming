#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints all the numbers of base16 in lowercase
 *
 * Return: Always 0 (Success
 */

int main(void)
{
	int num;

	char az;

	num = '0';

	az = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (az <= 'f')
	{
		putchar(az);
		az++;
	}

	putchar('\n');

	return (0);
}
