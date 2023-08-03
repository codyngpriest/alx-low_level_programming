#include "main.h"



/**
* _strncat - concatenated two string on n bytes
* @src: a pointer to the source string
* @dest: a pointer to the destination string
* @n: the number of bytes of the src string
*
* Return: the concatented string
*/



char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';
return (dest_start);
}

