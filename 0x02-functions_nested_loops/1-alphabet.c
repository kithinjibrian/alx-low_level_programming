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

int main(void)
{
	print_alphabet();
	return (0);
}
