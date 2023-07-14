#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
if (i != j)
{
putchar(i + 48);
putchar(j + 48);
if ((i + 48) != '8')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
