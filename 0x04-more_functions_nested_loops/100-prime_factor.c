#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* main - finds and prints the largest prime factor from 612852475143
*
* Return: void
*/

int main(void)
{
long num = 612852475143;
long largest_prime = 2;
long i;

while (num % 2 == 0)
{
num /= 2;
}

for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largest_prime = i;
num /= i;
}
}
if (num > 2)
{
largest_prime = num;
}
printf("%ld\n", largest_prime);
return (0);
}
