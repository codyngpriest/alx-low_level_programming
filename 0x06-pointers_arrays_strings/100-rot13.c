#include "main.h"

/**
* rot13 - encodes a string in rot13
* @str: pointer to the string to encode
* You can only use if statement once in your code
* You can only use two loops in your code
* You are not allowed to use switch
* You are not allowed to use any ternary operation
*
* Return: the ecoded string
*/


char *rot13(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
/* Encode uppercase letters */
if (*ptr >= 'A' && *ptr <= 'Z')
{
*ptr = ((*ptr - 'A' + 13) % 26) + 'A';
}
/* Encode lowercase letters */
else if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = ((*ptr - 'a' + 13) % 26) + 'a';
}
ptr++;
}

return (str);
}
