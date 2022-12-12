#include <stdio.h>

/**

 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)

 *
 * Description: 
 *

 *Return: Always 0 (Success)

 */

int main(void)
{

	int a;

	int b;

	for (b = '0'; b <= '9'; b++) /*increment tens*/

	{
		for (a = (b + 1); a <= '9'; a++) /*one's ten+1*/

		{

			putchar(b);

			putchar(a);

			if (b != '8' || a != '9') /*print commas*/

			{

				putchar(',');

				putchar(' ');

			}
		}
	}

	putchar('\n');

	return (0);
}
