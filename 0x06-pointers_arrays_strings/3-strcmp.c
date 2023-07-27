#include "main.h"
/**
 * _strcmp - compare two strings.
 * @str1: string to compare.
 * @str2: string to be compared with.
 * Return: Difference.
 */
int _strcmp(char *str1, char *str2)
{
while ((*str1 != '\0' && *str2 != '\0') && *str1 == *str2)
{
str1++;
str2++;
}
if (*str1 == *str2)
{
return (0);
}
else
{
return (*str1 - *str2);
}
}
