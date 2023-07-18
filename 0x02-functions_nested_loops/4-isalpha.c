#include <ctype.h>
#include "main.h"
/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @ch: character to be checked.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */

int _isalpha(char ch)
{
	if (isalpha(ch))
		return (1);
	else
		return (0);
}
