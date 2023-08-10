#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: a pointer to the first string
* @s2: a pointer to the second string
* @n: the size of string
* if NULL is passed, treat it as an empty string
* If n is greater or equal to the length of s2 then use the entire string s2
* If the function fails, it should return NULL
* Return: a pointer shall point to a newly allocated space in memory, which
* contains s1, followed by the first n bytes of s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i, j;
char *result;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len1 = string_length(s1);
len2 = string_length(s2);

if (n >= len2)
n = len2;

result = malloc(len1 + n + 1);
if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++)
{
result[i + j] = s2[j];
}

result[i + j] = '\0';

return (result);
}

/**
* string_length - copies a string
* @str: a pointer to the string to copy
* Return: the length of the strig
*/

unsigned int string_length(const char *str)
{
unsigned int length = 0;

while (str[length] != '\0')
{
length++;
}

return (length);
}

