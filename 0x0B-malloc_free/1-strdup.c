#include "main.h"


/**
* _strdup -returns a pointer to a newly allocated space in memory, which
* contains a copy of the string given as a parameter
* @str: a pointer to the string
* The _strdup() function returns a pointer to a new string which is a
* duplicate of the string str
* Memory for the new string is obtained with malloc, and can be freed with free
*
* Return: NULL if str = NULL and on success returns a pointer to the duplicated
* string. It returns NULL if insufficient memory was allocated
*/

char *_strdup(char *str)
{
unsigned int length, i;
char *duplicate;

if (str == NULL)
return (NULL);

/* get the length of the input string */
length = 0;

while (str[length] != '\0')
length++;

/* allocate memory for the new string */
duplicate = (char *)malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

/* copy the content of the input string to the new memory block */
for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}

return (duplicate);
}
