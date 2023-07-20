#include "main.h"

/**
* more_numbers - prints the numbers 0 t0 14 ten times
*
* Return: void
*/

void more_numbers(void)
{
int repeat = 10;
int i, num;

for (i = 0; i < repeat; i++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar('0' + num / 10);
}
_putchar('0' + num % 10);
}
_putchar('\n');
}
}
