#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index in an unsigned long int.
 * @n: The unsigned long int containing the bits.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index, or -1 if index is invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}