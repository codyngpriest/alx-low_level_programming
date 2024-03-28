#include "main.h"


/**
* _strstr - locates a substring
*
* @haystack: a pointer to the string to locate the substring
* @needle: a pointer to the substring
*
* Return: a pointer to the beginning of the located substring, or NULL if the
* substring is not found
*
*/


char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack)
{
h = haystack;
n = needle;

while (*n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
