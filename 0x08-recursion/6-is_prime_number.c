#include "main.h"

/**
* is_prime_number - returns 1 for prime numbers otherwise 0
* @n: the number to check if it is a prime number
*
* Return: 1 for prime number and 0 otherwise
*
*/

int is_prime_number(int n)
{
int limit;

/* numbers less than or equal to 1 are not prime */
if (n <= 1)
return (0);

/* check for up to n/ 2 divisors */
limit = n / 2;

/* if no divisor is found between 2 and n/2 (inclusive), it is prime */
return (!is_divisible(n, 2, limit));
}

/**
* is_divisible - a helper to check if n is divisible by any number from
* i to limit
* @n: the number to check for divisibility
* @i: the curent divisor to check
* @limit: the limit for the divisor
*
* Return: 1 if n is divisible by any number between i and limit (inclusive)
* otherwise 0
*
*/

int is_divisible(int n, int i, int limit)
{
if (i > limit)
return (0);

if (n % i == 0 && i != n)
return (1);

return (is_divisible(n, i + i, limit));
}
