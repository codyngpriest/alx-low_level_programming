#include "main.h"

/**
* _calloc - allocates memory for an array using malloc
* @nmemb: an array of elements
* @size: the size of the array
* The _calloc function allocates memory for an array of nmemb elements of
* size bytes each and returns a pointer to the allocated memory
* The memory is set to zero
*
* Return: If nmemb or size is 0, then _calloc returns NULL
* If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned char *byte_ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
byte_ptr = (unsigned char *)ptr;
for (i = 0; i < nmemb * size; i++)
{
byte_ptr[i] = 0;
}

return (ptr);
}


