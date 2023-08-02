#include "main.h"

/**
 * wildcmp - Compares two strings with the special character * using recursion.
 * @s1: The first string.
 * @s2: The second string with the special character *.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */


int wildcmp(char *s1, char *s2)
{
/* Base case: Both strings reach their end, they are identical */
if (*s1 == '\0' && *s2 == '\0')
return (1);

/* If the current character in s2 is *, we need to handle the special case */
if (*s2 == '*')
{
/* Recursively check if s1 matches the part of s2 after * */
if (wildcmp(s1, s2 + 1) == 1)
return (1);

/* If not, move to the next character in s1 and try matching again */
if (*s1 != '\0')
return (wildcmp(s1 + 1, s2));
}
/* If characters match, move to the next characters in both strings */
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
/* If characters don't match, return 0 */
return (0);
}

