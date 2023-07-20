#include "main.h"

/**
 * print_diagonal: function to print diagonal
 * @i: number of rows
 * Return: nothing
 */

void print_triangle(int i)
{
	int y, z, m = i <= 0 ? 1 : i;

	for (y = 0; y < m; y++)
	{
		for (z = 0; z < i; z++)
		{
			if (z < i - y - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
	_putchar('\n');
	}
}
