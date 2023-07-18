#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a numer.
 * @i: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int i)
{
	int n = abs((i % 10));
	
	_putchar(n + '0');
	return (n);
}
