#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - defines information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

/* Structure definition for a dog */
struct dog
{
char *name;     /* Name of the dog */
float age;      /* Age of the dog */
char *owner;    /* Owner of the dog */
};

/* define a new type dog_t as a new name for struct dog */
typedef struct dog dog_t;

/* function prototypes */

/* Initializes a function prototype struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* prints a struct dog */
void print_dog(struct dog *d);

/* creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
