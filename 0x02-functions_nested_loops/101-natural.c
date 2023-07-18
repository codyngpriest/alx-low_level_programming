#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 and 5
 *
 * Return: void
 */

int main(void)
{
int limit = 1024;
int sum = 0;

for (int i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("%d\n", sum);
return (0);
}
