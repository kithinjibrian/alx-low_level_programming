#include <unistd.h>
int _putchar(int c);
/**
 *print_alphabet - print alphabet
 */

void print_alphabet(void)
{
    char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}