#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: a pointer to the destination string
* @src: a pointer to the source string
* @n: most bytes from src
* src does not need to be null-terminated if it contains n or more bytes
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
char *result = dest;

/* move the dest pointer to the end of the destination string */
while (*dest != '\0')
{
dest++;
}

/* copy most n bytes from src to the destination */
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

/* Put the NULL character at the end to terminate the concatenated string */
*dest = '\0';
return (result);
}
