#include "main.h"


/**
* _strlen - calculates the length of a string
* @s: a pointer to the input string
*
* Return: the length of the string
*/

int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen(s + 1));
}

/**
* is_palindrome_helper - a helper to check if a string is a palindrome
* @s: The string to be checked
* @start: The starting index
*@end: The ending index
*
*Return: 1 if the string is a palindrome, otherwise 0
*/

int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] == s[end])
return (is_palindrome_helper(s, start + 1, end - 1));
return (0);
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: The string to be checked
* Return: 1 if the string is a palindrome, otherwise 0
*
*/

int is_palindrome(char *s)
{
int len = _strlen(s);

if (len <= 1)
return (1);
return (is_palindrome_helper(s, 0, len - 1));
}

