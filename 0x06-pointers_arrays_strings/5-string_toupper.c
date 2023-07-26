#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
*
* @str: pointer to the string
* Return: the resulting string
*
*/

char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
/* convert lowercase letter to uppercase */
*ptr = *ptr - 'a' + 'A';
}
ptr++;
}

return (str);
}
