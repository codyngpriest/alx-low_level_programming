#include "main.h"

/**
* _puts - prints a string to stdout followed by a new line
* @str: a pointer to the string to print
*
* Return: The string
*
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
