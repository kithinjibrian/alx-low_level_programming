#include <stdio.h>
/**
 *
 *
 *
 */

void print_to_98(int lb)
{
	if(lb > 98)
	{
		for (lb; lb >= 98; lb--)
		{
			printf("%d", lb);
			if(lb != 98)
			{
				printf(", ");
			}
		}
	}
	else {
		for (lb; lb <= 98; lb++)
		{
			printf("%d", lb);
			if(lb != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
