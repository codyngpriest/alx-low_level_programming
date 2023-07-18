#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: the variable for the times tables
 * If n is greater than 15 or less than 0 the function should not print
 * anything
 * Return: void
 */



void print_times_table(int n)
{

int i, j, result;

if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');

result = i * j;
if (result <= 9)
{
_putchar(' ');
_putchar('0' + result);
}
else if (result <= 99)
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
else
{
_putchar('0' + result / 100);
_putchar('0' + (result / 10) % 10);
_putchar('0' + result % 10);
}
}
_putchar('\n');
}
}

