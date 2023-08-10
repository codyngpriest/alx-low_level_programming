#include "main.h"

/**
* array_range - creates an array of integers
* @min: the minimum integer
* @max: the maximum integer
* The array created should contain all the values from min (included) to max
* (included), ordered from min to max
* Return: the pointer to the newly created array
* if min > max, return NULL
* if malloc fails, return NULL
*/

int *array_range(int min, int max)
{
int size, i;
int *arr;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
