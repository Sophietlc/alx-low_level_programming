#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:p rints from 0-100
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
