#include <stdio.h>

/**
 * main - finds and prints the sum of the evn-valued term
 *
 * Return: void
 */



int main(void)
{
int limit = 4000000;
int fib1 = 1, fib2 = 2, nextFib;
int sum = 0;

while (fib2 <= limit)
{
if (fib2 % 2 == 0)
{
sum += fib2;
}

nextFib = fib1 + fib2;
fib1 = fib2;
fib2 = nextFib;
}

printf("%d\n", sum);
return (0);
}

