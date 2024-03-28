#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: a pointer to the string
* @accept: a pointer to the saccept string
*
* Return: the number of bytes in the initial segment of s which
* consist only of bytes from accept
*/


unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

int is_match;
char *acc_ptr;

while (*s)
{
is_match = 0;

for (acc_ptr = accept; *acc_ptr; acc_ptr++)
{
if (*s == *acc_ptr)
{
is_match = 1;
break;
}
}
if (!is_match)
{
break;
}
count++;
s++;
}
return (count);
}
