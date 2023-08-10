#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* concatenates two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int string_length(const char *str);

/* allocates memory for an array using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* creates an arry of ints */
int *array_range(int min, int max);

#endif /* MAIN_H */
