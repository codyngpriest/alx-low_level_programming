#include"main.h"

/**
*print_triangle - prints a triangle followed by a new line
*You can only use _putchar function to print
*@size: is the size of the triangle
*If size is 0 or less, the function should print only a new line
*Use the character # to print the triangle
*
*Return: void
*/

void print_triangle(int size)
{
int row, space, column;
if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
{
_putchar(' ');
}
for (column = 1; column <= row; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
