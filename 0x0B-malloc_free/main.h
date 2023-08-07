#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>


/* prints a single character to stdout */
int _putchar(char c);

/* creates an array of chars and initializes it with a specific char */
char *create_array(unsigned int size, char c);

/* returns a pointer to a newly allocated space in memeory */
char *_strdup(char *str);

/* concatenates two strings */
char *str_concat(char *s1, char *s2);

/* returns a pointer to a 2 dimentional array of ints */
int **alloc_grid(int width, int height);

/* frees a 2 dimensional grid previously created by your alloc_grid function */
void free_grid(int **grid, int height);

/* concatenates all arguments of a program */
char *argstostr(int ac, char **av);



#endif /* MAIN_H */
