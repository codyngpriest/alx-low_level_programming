#include "main.h"

/**
* print_square - prints a square followed by a new line
* You can only use _putchar function to print
* @size: is the size of the square
* If size is 0 or less, the function should print only a new line
* Use the character # to print the square
*
* Return: void
*/

void print_square(int size)
{
int row, column;

if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
