#include <stdio.h>
/*
 *
 *
 * */

void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

void print_alphabet_x10(void)
{
	for(int i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
