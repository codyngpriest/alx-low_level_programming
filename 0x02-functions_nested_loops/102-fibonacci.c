#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibunacci series
 * The numbers must be separated by comma, followed by a space ,
 *
 * Return: void
 */


int main(void)
{
int count = 50;
int fib1 = 1, fib2 = 2;
int i;
printf("%d, %d", fib1, fib2);

for (i = 2; i < count; i++)
{
int nextFib = fib1 + fib2;
printf(", %d", nextFib);

fib1 = fib2;
fib2 = nextFib;
}

printf("\n");
return (0);
}
