#include "main.h"


/**
* _puts_recursion - prints a string followed by a new line
* @s: a pointer to the string to print
*
* Return: void
*/

void _puts_recursion(char *s)
{
/* If end of string is reached */
if (*s == '\0')
{
_putchar('\n');
return;
}

/* print the character */
_putchar(*s);

/* Recursively call the function with the next character */
_puts_recursion(s + 1);
}


