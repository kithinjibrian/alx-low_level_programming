#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */

int print_last_digit(int i)
{
	return abs((i % 10));
}

int main(void)
{
	putchar(print_last_digit(98) + '0');
	putchar(print_last_digit(0) + '0');
	putchar(print_last_digit(404) + '0');
	putchar(print_last_digit(-1024) + '0');
	putchar('\n');
	return (0);
}
