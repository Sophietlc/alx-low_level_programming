#include <stdio.h>

/**

 *main - 

 *
 * Description: 
 *

 *Return: Always 0 (Success)

 */

int main(void)
{

	int a;

	int b;

	int c;

	for (b = '0'; b <= '9'; b++) /*increment tens*/

	{
		for (a = (b + 1); a <= '9'; a++) /*one's ten+1*/

		{

			for (c = '0'; c <= '9'; c++) /*increment tens*/
			{


				putchar(b);

				putchar(a);

				putchar(c);

				if ( b != '7' || a != '8' || c != '9') /*print commas*/

				{

					putchar(',');

					putchar(' ');

				}

			}
		}
	}

	putchar('\n');

	return (0);
}
