#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: the variable to allocate memory
* Return: A pointer to the allocated memory, if it fails terminate
* with status 98
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
