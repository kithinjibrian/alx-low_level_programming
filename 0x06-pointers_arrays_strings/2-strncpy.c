#include "main.h"
/**
 * _strncpy - concatenate strings
 * @d: string d
 * @s: string src
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *d, char *s, int n)
{
int i;

for (i = 0; i < n && s[i] != '\0'; i++)
*(d + i) = *(s + i);
for ( ; i < n; i++)
*(d + i) = '\0';
return (d);
}
