#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: a pointer to the square matrix of ints
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, sum_diag1 = 0, sum_diag2 = 0;

for (i = 0; i < size; i++)
{
/* diagonal elements from top-left to bottom right */
sum_diag1 += a[i * size + i];

/* diagonal elements from top-right to bottom-left */
sum_diag2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum_diag1, sum_diag2);
}

