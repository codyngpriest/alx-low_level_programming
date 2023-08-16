#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
#include <unistd.h>

/* prints a name */
void print_name(char *name, void (*f)(char *));

/* executes a function given as a parameter on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));
void print_square(int num);
void print_cube(int num);
int _putchar(char c);


#endif /* FUNCTION_POINTERS_H */
