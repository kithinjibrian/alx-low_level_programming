#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to convert one number to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int count;

	xor = n ^ m;
	count = 0;

	while (xor)
	{
		count++;
		xor &= (xor - 1);
	}

	return (count);
}