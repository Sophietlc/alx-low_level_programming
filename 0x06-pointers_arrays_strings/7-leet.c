#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	int alph[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int leet[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(alph + j) != '\0'; j++)
		{
			if *(str + i) == *(alph + j)
				*(str + i) = *(leet + j);
		}
	}
	return (str);
}
