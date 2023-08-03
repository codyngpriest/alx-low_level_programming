#include "main.h"


/**
* _memcpy - copies memory
* @src: a pointer to the source string
* @dest: a pointer to the destination string
*
* @n: the number of bytes
*
* Return: always success
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_start = dest;

while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (dest_start);
}

