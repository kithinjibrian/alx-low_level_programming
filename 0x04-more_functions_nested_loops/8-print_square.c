#include "main.h"

/**
 * print_square - print square using #
 * @i: number of #
 * Return: Nothing
 */

void print_square(int i)
{
	int y, z, n = i <= 0 ? 0 : i, m = i <= 0 ? 1 : i;

	for (y = 0; y < m; y++)
	{
		for (z = 0; z < n; z++)
		{
			_putchar("#");
		}
		_putchar("\n");
	}
}
