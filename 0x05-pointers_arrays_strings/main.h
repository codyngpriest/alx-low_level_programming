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

/* reverses a string */
void rev_string(char *s);

/* prints every other charater of a string */
void puts2(char *str);

/* prints half of a string */
void puts_half(char *str);

/* prints n elements of an array of integers */
void print_array(int *a, int n);

/* copies the string pointed to by src */
char *_strcpy(char *dest, char *src);


#endif /* MAIN_H */
