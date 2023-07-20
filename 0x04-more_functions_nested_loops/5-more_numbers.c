#include "main.h"

/**
 * print - function to print 0 -14
 * Return: Nothing
 */

void print(void)
{
	int a;

	for (a = 0; a < 15; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}

/**
 * more_numbers - function to print 10 times
 * Return: Nothing
 */

void more_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		print();
	}
}
