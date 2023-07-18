#include <stdio.h>
#include <ctype.h>
/*
 *
 *
 * */

int _islower(char ch)
{
	if( islower(ch))
	{
		return (1);
	}
	else {
		return (0);
	}
}

int main(void)
{
	int r;
	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
