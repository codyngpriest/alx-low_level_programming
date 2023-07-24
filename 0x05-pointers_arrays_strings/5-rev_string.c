#include "main.h"

/**
* swap- swaps two characters
* @a: pointer to the first charater
* @b: pointer to the second character
*
* Return: void
*/

void swap(char *a, char *b)
{
char temp;
temp = *a;
*a = *b;
*b = temp;
}

/**
* rev_string - reverse a string
* @s: pointer to the string
*
* Return: the reversed string
*/

void rev_string(char *s)
{
int length, start, end;
length = 0;

while (s[length] != '\0')
{
length++;
}

start = 0;
end = length - 1;

while (start < end)
{
swap(&s[start], &s[end]);
start++;
end--;
}
}


