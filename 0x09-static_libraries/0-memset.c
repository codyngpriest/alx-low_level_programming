#include "main.h"


/**
* _memset - resets memory
* @s: a pointer to the string
* @b: a character variable
* @n: the number of bytes
*
* Return: the string
*/



char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n > 0)
{
*ptr = b;
ptr++;
n--;
}

return (s);
}

