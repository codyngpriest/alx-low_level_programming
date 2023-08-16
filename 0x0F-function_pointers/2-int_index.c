#include "function_pointers.h"

/**
* int_index - takes an array as argument and searches
* @array: a pointer to the array
* @cmp: a pointer to the function
* @size: the size of the array
* Return: index of the first element or -1 if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}

/**
* compare_positive - compares if a number is positive
* @num: the number to compare
* Return: Always 0 (Success)
*/

int compare_positive(int num)
{
return (num > 0);
}

/**
* compare_even - compares even numbers
* @num: the number to compare
* Return: Always 0 (Success)
*/

int compare_even(int num)
{
return (num % 2 == 0);
}
