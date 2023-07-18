#include <stdio.h>
/**
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			printf("%02d:%02d\n",h,m);
		}
	}
}


int main(void)
{
	jack_bauer();
	return (0);
}
