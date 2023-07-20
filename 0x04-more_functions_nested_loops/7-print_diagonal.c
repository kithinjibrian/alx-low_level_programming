#include "main.h"

/**
 * print_diagonal - function to print diagonal
 * @i: number of spaces
 * Return: nothing
 */

void print_diagonal(int i)
{
int y, z, m = i <= 0 ? 1 : i;

	for (y = 0; y < m; y++)
	{
		for (z = 0; z < y; z++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
