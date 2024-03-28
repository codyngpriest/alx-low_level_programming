#include "main.h"

/**
* _strchr - locates the first occurence of a charater in a string
* @s: a pointer to string for the character to be located
* @c: the charater to locate
*
* Return: a pointer to the first occurence of the charater c in the string s
* or NULL if the character is not found
*
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}

return (NULL);
}


