#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* concatenates two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int string_length(const char *str);

#endif /* MAIN_H */
