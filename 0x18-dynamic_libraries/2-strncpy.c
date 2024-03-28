#include "main.h"

/**
* _strncpy - copies a string
* @dest: a pointer to the destination string
* @src: a pointer to the source string
* @n: most most of the source string
*
* Return: a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;

/* copy at most n bytes from src to dest */
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}

/* If n is greater than the length of src, fill the remaining n bytes */
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (result);
}
