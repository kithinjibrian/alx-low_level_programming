#include <ctype.h>
#include "main.h"

/**
 * _isdigit - function to determine if a character is a digit
 * @ch: character
 * Return: 1 if ch is digit else 0
 */

int _isdigit(char ch)
{
	return (isdigit(ch) ? 1 : 0);
}
