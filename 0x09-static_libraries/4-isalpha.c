#include "main.h"

/**
* _isalpha - checks if a character is an alphabet
*
* @c: the character to check
*
* Return: always 0 (success)
*/




int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

