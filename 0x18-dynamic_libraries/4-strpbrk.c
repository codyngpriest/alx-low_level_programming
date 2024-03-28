#include "main.h"

/**
* _strpbrk - searches a string for any set of bytes
*
* @s: a pointer to the string
* @accept: a pointer to the accepted string
* The _strpbrk() function locates the first occurrence in the string s of any
* of the bytes in the string accept
*
* Return: a pointer to the byte in s that matches one of the bytes in
* accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
char *a;

while (*s)
{
a = accept;

while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
