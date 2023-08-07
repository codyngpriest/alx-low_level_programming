#include "main.h"

/**
* create_array - creates an array of chars
* @size: the size of the char
* @c: the char to create
*
* Return: NULL if size = 0 or a pointer to the array and NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
return (NULL);
array = (char *)malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
