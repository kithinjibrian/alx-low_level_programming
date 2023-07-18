#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @lb: the number to start counting from to 98
 * Return: void returns nothing.
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
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else {
		for (lb; lb <= 98; lb++)
		{
			_putchar(lb);
			if(lb != 98)
			{
				_putchar(', ');
			}
		}
	}
	_putchar('\n');
}
