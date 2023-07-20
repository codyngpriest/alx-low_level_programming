#include "main.h"

/**
* print_line - draws a straight line in the terminal
* You can only use _putchar function to print
* @n: the number of times to print the character _
* The line should end with a \n
* If n is 0 or less, the function should only print \n
*
* Return: void
*/

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
