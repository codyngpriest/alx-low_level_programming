#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 *
 * @n: the starting variable
 *
 * Return: void
 */

void print_to_98(int n)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
else
{
printf("\n");
}
n++;
}
}




