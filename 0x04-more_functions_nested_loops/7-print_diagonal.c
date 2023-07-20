#include "main.h"

/**
* print_diagonal - draws a diagonal on the terminal
* You can only use _putchar function to print
* @n: is the number of times the character \ should be printed
* The diagonal should end with a \n
* If n is 0 or less, the function should only print a \n
*
* Return: void
*/

void print_diagonal(int n)
{
int row, column;

if (n <= 0)
{
_putchar('\n');
return;
}

for (row = 0; row < n; row++)
{
for (column = 0; column < row; column++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}
