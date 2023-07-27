#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @d: string destination
 * @s: string source
 * Return: Always 0.
 */
char *_strcat(char *d, char *s)
{
int length_d, length_s;

length_d = 0;
length_s = 0;

while (*(d + length_d) != '\0')
length_d++;

while (*(s + length_s) != '\0' && length_d < 97)
{
*(d + length_d) = *(s + length_s);
length_d++;
length_s++;
}
*(d + length_d) = '\0';
return (d);
}
