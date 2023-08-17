#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>

/* returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);

/* prints numbers followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCTION_H */
