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
			_putchar(lb);
			if(lb != 98)
			{
				_putchar(",");
				_putchar(" ");
			}
		}
	}
	else {
		for (lb; lb <= 98; lb++)
		{
			_putchar(lb);
			if(lb != 98)
			{
				_putchar(", ");
			}
		}
	}
	_putchar("\n");
}
