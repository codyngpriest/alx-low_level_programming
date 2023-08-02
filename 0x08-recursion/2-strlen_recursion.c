#include "main.h"


/**
* _strlen_recursion - return the length of a string
* @s: a pointer to the string
*
* Return: the length of the string
*/

int _strlen_recursion(char *s)
{
/* When end of string ('\0') is reached */
if (*s == '\0')
{
return (0);
}
/* recursivly calling the function and adding 1 to the result */
return (1 + _strlen_recursion(s + 1));
}
