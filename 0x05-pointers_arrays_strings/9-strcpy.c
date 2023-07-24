#include "main.h"

/**
* *_strcpy - copies the string pointed to by src, including the null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the destination string
* @src: pointer to the string to be copied
*
* Return: the pointer dest
*/

char *_strcpy(char *dest, char *src)
{
int i;
i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}
