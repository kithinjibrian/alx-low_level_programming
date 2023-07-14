#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
for (k = j; k < 10; k++)
{
if (i != j && j != k && k != i)
{
putchar(i + 48);
putchar(j + 48);
putchar(k + 48);
if ((i + 48) != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
