#include <stdio.h>

/**
 *
 *
 *
 */

void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			printf("%d",i * y);
			if(y != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

int main(void)
{
	times_table();
	return (0);
}
