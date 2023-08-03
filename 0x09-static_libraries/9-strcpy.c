#include "main.h"

/**
* _strcpy - copies a string
* @src: a pointer to the source string
* @dest: a pointer to the destination string
*
* Return: a pointer to the destination string
*/



char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_start);
}

