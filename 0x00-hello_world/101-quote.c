#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str1 = "\"and that piece of art is useful\" ";
char str2 = "- Dora Korpar, 2015-10-19\n";

fprintf(stderr, str1 + str2);
return (1);
}
