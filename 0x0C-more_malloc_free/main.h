#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
/* allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* concatenates two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int string_length(const char *str);

/* allocates memory for an array using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* creates an arry of ints */
int *array_range(int min, int max);

/* reallocates a memory block using malloc and free */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


/* multiplies two positive numbers */
int multiply_digit(char num1, char num2);
void print_number(char *num);
void reverse_string(char *str, int length);
void multiply_and_print(char *num1, char *num2);
int main(int argc, char *argv[]);
int _putchar(char c);

#endif /* MAIN_H */
