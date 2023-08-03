#include "main.h"

/**
* _strcat - concatenates two strings
* @src: a pointer to the source string
* @dest: a pointer to the destination string
*
* Return: the concatenated string
*/



char *_strcat(char *dest, char *src)
{
char *dest_start = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (dest_start);
}

