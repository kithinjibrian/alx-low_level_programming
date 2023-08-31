#include "main.h"

/**
 * clear_bit - Clears the bit at a specific index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int q;

	if (index > 63)
	{
		return (-1);

	}

	q = 1 << index;

	if (*n & q)
	{
		*n ^= q;
	}

	return (1);
}