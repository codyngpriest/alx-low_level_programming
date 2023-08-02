#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to calculate its square root
*
* Return: the natural square root of the number. If the number has no natural
* square root, then return -1
*
*/

int _sqrt_recursion(int n)
{
/* when n is negative, return -1 to show an error */
if (n < 0)
{
return (-1);
}
/* calling the helper function with the initial guess value as 1 */
return (sqrt_helper(n, 1));
}


/**
* sqrt_helper - a helper function to calculate the square root using recursion
* @n: the number to calculate its square root
* @guess: the current value for the square root
*
* Return: the natural square root of the number or -1 otherwise
*
*/

int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
else if (guess * guess > n)
return (-1);
else
return (sqrt_helper(n, guess + 1));
}
