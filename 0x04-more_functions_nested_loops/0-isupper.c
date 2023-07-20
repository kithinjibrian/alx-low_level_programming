#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isupper - function to determine if a character is uppercase
 * @ch: character
 * Return: 1 if ch is uppercase
 */

int _isupper(char ch)
{
	return (isupper(ch) ? 1 : 0);
}
