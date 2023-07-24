#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @n: number of elements of the array to be printed
* @a: pointer to the array
*
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in
* the array
*/

void print_array(int *a, int n)
{
int i;

if (a == NULL || n <= 0)
{
return;
}

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");

}
