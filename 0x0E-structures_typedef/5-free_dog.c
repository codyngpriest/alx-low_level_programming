#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t instance
 * @d: Pointer to the dog_t instance to be freed
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free the dynamically allocated strings */
free(d->name);
free(d->owner);

/* Free the structure itself */
free(d);
}
}

