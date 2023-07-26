#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* prints a single character to stdout */
int _putchar(char c);

/* concatenates two strings */
char *_strcat(char *dest, char *src);

/* concatenates two strings */
char *_strncat(char *dest, char *src, int n);

/* copies a string */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings */
int _strcmp(char *s1, char *s2);



#endif /* MAIN_H */
