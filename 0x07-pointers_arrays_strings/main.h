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

/* searches a string for any set of bytes */
char *_strpbrk(char *s, char *accept);

/* locates a substring */
char *_strstr(char *haystack, char *needle);

/* prints the chessboard */
void print_chessboard(char (*a)[8]);

/* prints the sum of two diagonals of a square matrix of ints */
void print_diagsums(int *a, int size);

#endif /* MAIN_H */
