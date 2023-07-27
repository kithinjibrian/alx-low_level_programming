#include "main.h"
/**
 * _strncat - concatenate strings
 * @d: string dest
 * @s: string src
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *d, char *s, int n)
{
int length_d, length_s;

length_d = 0;
length_s = 0;

while (*(d + length_d) != '\0')
length_d++;

while (*(s + length_s) != '\0' && length_d < 97 && length_s < n)
{
*(d + length_d) = *(s + length_s);
length_d++;
length_s++;
}
*(d + length_d) = '\0';
return (d);
}
