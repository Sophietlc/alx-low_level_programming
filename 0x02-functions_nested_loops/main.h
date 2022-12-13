void putchr(char a)
{
	putchar(a);
}

void print_alphabet(void)
{
	char first;
	first = 'a';
	for (first <= 'z')
	{
		putchar(first);
		first++;
	}
	putchar('\n');
}
