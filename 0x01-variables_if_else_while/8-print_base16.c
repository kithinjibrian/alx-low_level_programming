#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d;
for (d = 0; d <= 9; d++)
{
putchar(d + 48);
}
for (d = 10; d <= 15; d++)
{
putchar(d + 87);
}
putchar('\n');
return (0);
}
