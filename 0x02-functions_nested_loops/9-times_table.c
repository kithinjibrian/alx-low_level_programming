#include "main.h"

/**
 * times_table - prints the times table from 0 - 9.
*
 * Return: Nothing.
 */

void times_table(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar((i * y) + '0');
			if(y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
