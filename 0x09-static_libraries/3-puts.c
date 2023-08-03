#include "main.h"


/**
* _puts - puts a character to stdout
* @s: a poniter to the string
*
* Return: the printed string
*/


void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
}

