#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: pointer to the string
*
* Return: the right characters
*
*/

void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}

_putchar('\n');
}
