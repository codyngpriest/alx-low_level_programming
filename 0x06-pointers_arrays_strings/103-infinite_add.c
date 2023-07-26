#include <stdio.h>
#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number represented as a string
 * @n2: second number represented as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result cannot be stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0;
int sum, i, j;

/* Calculate the lengths of n1 and n2 */
while (n1[len1])
len1++;
while (n2[len2])
len2++;

/* Check if the result can fit in the buffer */
if (len1 >= size_r || len2 >= size_r)
return (0);

/* Initialize the result buffer */
r[size_r - 1] = '\0';

/* Start adding from the last digits of n1 and n2 */
i = len1 - 1;
j = len2 - 1;

/* Perform the addition */
while (i >= 0 || j >= 0 || carry)
{
sum = carry;

if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';

carry = sum / 10;
r[--size_r] = sum % 10 + '0';
}

/* Skip leading zeros */
while (*r == '0' && *(r + 1) != '\0')
r++;

return (r);
}

