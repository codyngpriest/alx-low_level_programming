#include "main.h"

/**
* _isdigit - checks for a digit(0 through 9)
* @c: the charcater to check if its a digit
*
* Return: 1 if c is a digit otherwise 0
*/

int _isdigit(int c)
{
return ((c >= '0' && c <= '9') ? 1 : 0);
}
