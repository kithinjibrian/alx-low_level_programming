#include "main.h"

/**
 * binary_to_int - Converts a binary string to an unsigned integer.
 * @b: The input binary string.
 *
 * Return: The converted unsigned integer, or 0 if input is not a valid binary.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int length, base2;

	if (!b)
	{
		return (0);
	}

	i = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			i += base2;
		}
	}

	return (i);
}