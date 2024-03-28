#include "main.h"

/**
* *_strcat - concatenates two strings
* @dest: a pointer to the destination string
* @src: a pointer to the src string
* This function appends the src string to the dest string, overwriting the
* terminating null byte (\0) at the end of dest, and then adds a terminating
* null byte
*
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
char *result = dest;

/* move the destination the pointer to the end of the destination string */
while (*dest != '\0')
{
dest++;
}

/* copy the src string to the destination */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
/* Add the null char to terminate the concatenated string */
*dest = '\0';
return (result);
}
