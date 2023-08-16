#include "function_pointers.h"


/**
* array_iterator - iterates over an array
* @array: a pointer to the array
* @size: size of the array
* @action: a pointer to the function
*
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

/**
* print_square - prints a square number
* @num: the number to print its square
*
* Return: Nothing
*/
void print_square(int num)
{
int result = num * num;
char digit;

if (result == 0)
{
_putchar('0');
return;
}

while (result > 0)
{
digit = '0' + (result % 10);
_putchar(digit);
result /= 10;
}
_putchar('\n');
}


/**
* print_cube - prints cube of a number
* @num: the number to print its cube
*
* Return: Nothing
*/
void print_cube(int num)
{
int result = num * num * num;
char digit;

if (result == 0)
{
_putchar('0');
return;
}

while (result > 0)
{
digit = '0' + (result % 10);
_putchar(digit);
result /= 10;
}
_putchar('\n');
}
