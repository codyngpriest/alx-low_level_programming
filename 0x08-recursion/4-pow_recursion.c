#include "main.h"

/**
*_pow_recursion - returns the value x to the power y
* @x: the base number
* @y: the power number
*
* Return: the result of x to the power y. If y is less than 0, return -1
*/


int _pow_recursion(int x, int y)
{
/* when y is lower than 0, return -1 to show an error */
if (y < 0)
{
return (-1);
}
/* any number to the power of 0 is 1 */
else if (y == 0)
{
return (1);
}
else
/* calculate the power recursively */
return (x * _pow_recursion(x, y - 1));
}
