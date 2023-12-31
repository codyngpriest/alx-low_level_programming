#include "main.h"

/**
* _realloc -  reallocates a memory block using malloc and free
* @ptr: a pointer to the previous memory
* @old_size: the size in bytes of the allocated space for ptr
* @new_size: the size in bytes of the new memory block
* Return: void
*/


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i, min_size;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

min_size = old_size < new_size ? old_size : new_size;
for (i = 0; i < min_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];

free(ptr);
return (new_ptr);
}

