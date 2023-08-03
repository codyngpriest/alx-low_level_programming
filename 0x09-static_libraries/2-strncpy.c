#include "main.h"



/**
* _strncpy - copies a string nased on n bytes
* @src: a pointer to the source string
* @dest: a pointer to the destination string
*
* @n: the number of bytes of the siurce string
*
* Return: the copied string
*/



char *_strncpy(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (dest_start);
}

