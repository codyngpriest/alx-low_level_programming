#include "main.h"

#include <ctype.h>

/**
* cap_string - capitalizes all words of a string
* @str: a pointer to the string
* Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ),
* {, and }
*
* Return: the capitalized words
*/

char *cap_string(char *str)
{
int i;
/* Flag to indicate that the next character should be capitalized */
int capitalize_next = 1;

for (i = 0; str[i] != '\0'; i++)
{
if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
str[i] == ')' || str[i] == '{' || str[i] == '}')
{
capitalize_next = 1;
}
else
{
if (capitalize_next)
{
str[i] = toupper(str[i]);
capitalize_next = 0;
}
else
{
str[i] = tolower(str[i]);
}
}
}

return (str);
}

