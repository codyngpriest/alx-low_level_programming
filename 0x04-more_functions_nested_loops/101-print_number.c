#include "main.h"

/**
* print_number - prints an integer
* You can only use _putchar function to print
* You are not allowed to use long
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values
*
* @n: the integer to print
* Return: void
*/

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar('0' + n % 10);
}
