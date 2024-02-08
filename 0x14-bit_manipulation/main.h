#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

/* Function prototypes */

/* converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* prints a char to stdout */
int _putchar(char c);

/* prints the binary representation of a number */
void print_binary(unsigned long int n);

/* returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* sets the value of a bit at a given index */
int set_bit(unsigned long int *n, unsigned int index);

#endif
