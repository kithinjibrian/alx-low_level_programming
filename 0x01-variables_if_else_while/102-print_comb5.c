#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
int tens1 = i / 10;
int ones1 = i % 10;
for (j = i; j <= 99; j++)
{
int tens2 = j / 10;
int ones2 = j % 10;
if (i != j)
{
if (i < 10)
{
putchar('0');
putchar('0' + i);
}
else
{
putchar('0' + tens1);
putchar('0' + ones1);
}
putchar(' ');
if (j < 10)
{
putchar('0');
putchar('0' + j);
}
else
{
putchar('0' + tens2);
putchar('0' + ones2);
}
putchar(',');
putchar(' ');
}
}
}
return (0);
}
