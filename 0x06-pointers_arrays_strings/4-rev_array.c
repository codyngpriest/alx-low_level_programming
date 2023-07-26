#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: a pointer to the an array
* @n: the number of elements of the array
*
* Return: the reversed array
*/

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;

while (start < end)
{
/* Swap the elements at the positions 'start' and 'end' */
int temp = a[start];
a[start] = a[end];
a[end] = temp;

/* move the pointers inward */
start++;
end--;
}
}
