#include <stdio.h>

/**
 *
 *
 *
 */

int print_sign(int i)
{
	if (i > 0)
	{
		return (1);
	}
	else if (i == 0)
	{
		return (0);
	}
	else {
		return (-1);
	}
}

void display(int r)
{
	char ch = r == 0 ? '0' : r > 0 ? '+' : '-';
	putchar(ch);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
}

int main(void)
{
	display(print_sign(98));
	display(print_sign(0));
	display(print_sign(0xff));
	display(print_sign(-1));
}
