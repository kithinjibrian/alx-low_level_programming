#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */

int _abs(int i)
{
	return (abs(i));
}

int main(void)
{
	printf("%d\n", _abs(-1));
	printf("%d\n", _abs(0));
	printf("%d\n", _abs(1));
	printf("%d\n", _abs(-98));
	return (0);
}
