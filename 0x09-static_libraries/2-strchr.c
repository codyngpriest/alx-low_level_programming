#include "main.h"



/**
* _strchr - checks  string character
* @s: a pointer to the string
* @c: the character to check
*
* Return: the results of the check
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

return (c == '\0' ? s : NULL);
}

