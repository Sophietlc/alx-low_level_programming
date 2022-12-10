#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Progra that 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int b = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, b); 
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less then 6 and not 0\n", n, b);
	}
	return (0);
}
