#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* prints a single character to stdout */
int _putchar(char c);

/* takes a pointer of an int and updates the value it points to 98 */
void reset_to_98(int *n);

/* swaps the values of two integers */
void swap_int(int *a, int *b);

/* returns the length of a string */
int _strlen(char *s);

/* prints a string to stdout */
void _puts(char *str);

/* prints a string in reverse */
void print_rev(char *s);

#endif /* MAIN_H */
