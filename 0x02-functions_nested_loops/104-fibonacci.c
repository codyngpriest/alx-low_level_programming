#include <stdio.h>

/**
 * main - prints the first 98 Fibunnaci numbers starting with 1 and 2
 * The numbers should be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * You are not allowed to use long long, malloc, pointers, arrays/tables,
 * or structures
 * ou are not allowed to hard code any Fibonacci number (except for 1 and 2)
 * Return: void
 */


int main(void)
{
unsigned int fib1 = 1, fib2 = 2, nextFib;
int count = 98;
int i;
printf("%u, %u", fib1, fib2);

for (i = 2; i < count; i++)
{
nextFib = fib1 + fib2;
printf(", %u", nextFib);

fib1 = fib2;
fib2 = nextFib;
}

printf("\n");
return (0);
}

