#include <unistd.h>
#include <stdio.h>
/**
 *print_alphabet - print alphabet
 */

void print_alphabet(void)
{
    char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}