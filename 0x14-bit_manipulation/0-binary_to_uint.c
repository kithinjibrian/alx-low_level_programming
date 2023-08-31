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
	int l, bt;

	if (!b)
		return (0);

	i = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, bt = 1; l >= 0; l--, bt *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			i += bt;
		}
	}

	return (i);
}