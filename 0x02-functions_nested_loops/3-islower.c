#include <ctype.h>
#include "main.h"

/**
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @ch: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */

int _islower(char ch)
{
	if (islower(ch))
		return (1);
	else
		return (0);
}
