#include "main.h"

/**
*print_rev - prints a string in reverse
*@s: a pointer to the string
*
*Return: the reversed string
*
*/

void print_rev(char *s)
{
int length, i;
length = 0;

while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
