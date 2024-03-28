#include "main.h"

/**
* _memcpy - copies to memory
* The _memcpy() function copies n bytes from memory area src to memory
* area dest Returns a pointer to dest
*
* @dest: a pointer to the destination string
* @src: a pointer to the source string
* @n: the number of bytes of the memory area to copy
*
* Return: a pointer to the destination area
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}


