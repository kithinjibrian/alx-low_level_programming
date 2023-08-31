#include "main.h"

/**
 * set_bit - Sets the bit at a specific index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n |= (1UL << index);

	return (1);
}
