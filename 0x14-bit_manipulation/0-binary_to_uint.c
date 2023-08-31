#include "main.h"

/**
 * binary_to_int - Converts a binary string to an unsigned integer.
 * @b: The input binary string.
 *
 * Return: The converted unsigned integer, or 0 if input is not a valid binary.
 */
unsigned int binary_to_int(const char *b)
{
	unsigned int i;
	int l, b;

	if (!b)
	{
		return (0);
	}

	i = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, b = 1; l >= 0; l--, b *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			i += b;
		}
	}

	return (i);
}