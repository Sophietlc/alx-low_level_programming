#include "main.h"

/**
 * puts2 - prints a string to stdout
 *
 * @str: string to be printed
 */

void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
