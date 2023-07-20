#include "main.h"

/**
 * print_line - function to print _
 * @i: number of spaces
 * Return: Nothing;
 */

void print_line(int i)
{
	int z = i <= 0 ? 0 : i;
	int a;

	for (a = 0; a < z; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
