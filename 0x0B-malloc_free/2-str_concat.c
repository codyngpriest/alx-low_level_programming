#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: a pointer to string one
* @s2: a pointer to string 2
* Return: NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
unsigned int i, len_s1, len_s2;
char *concatenated;
len_s1 = 0;
len_s2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len_s1] != '\0')
len_s1++;
while (s2[len_s2] != '\0')
len_s2++;
concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < len_s1; i++)
{
concatenated[i] = s1[i];
}
for (i = 0; i < len_s2; i++)
{
concatenated[len_s1 + i] = s2[i];
}
concatenated[len_s1 + len_s2] = '\0';
return (concatenated);
}
