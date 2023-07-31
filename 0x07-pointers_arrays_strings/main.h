#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
/* prints a single charater to stdout */
int _putchar(char c);

/* feels memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* locates a charater in a string */
char *_strchr(char *s, char c);

/* gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

#endif /* MAIN_H */
