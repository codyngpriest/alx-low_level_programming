#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: the character to check
*
* Return: 1 if c is uppercase otherwise 0
*/

int _isupper(int c)
{
return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
