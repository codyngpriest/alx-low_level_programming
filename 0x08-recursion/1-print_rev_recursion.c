#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: a pointer to the string to print in reverse
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
/* if End of string is reached */
if (*s == '\0')
{
return;
}
/* Recursively calling the function */
_print_rev_recursion(s + 1);

/* print the current character */
_putchar(*s);
}
