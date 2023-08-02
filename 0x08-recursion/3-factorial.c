#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: the number to return its factorial
*
* If n is lower than 0, the function should return -1 to indicate an error
* Factorial of 0 is 1
*
* Return: the factorial of the number
*/


int factorial(int n)
{
/* When n is lower than 0, return -1 to indicate an error */
if (n < 0)
{
return (-1);
}
/* factorial of 0 is 1 */
else if (n == 0 || n == 1)
{
return (1);
}
 /* calculate the factorial recursively */
else
return (n * factorial(n - 1));
}
