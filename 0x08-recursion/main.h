#ifndef MAIN_H
#define MAIN_H


#include <unistd.h>

/* prints a single char to stdout */
int _putchar(char c);

/* prints a string */
void _puts_recursion(char *s);

/* prints a string in reverse */
void _print_rev_recursion(char *s);

/* returns the length of a string */
int _strlen_recursion(char *s);

/* returns the factorial of a number */
int factorial(int n);

/* returns the value x to the power y */
int _pow_recursion(int x, int y);

/* returns the nataural square root of a number */
int _sqrt_recursion(int n);

/* helps prints natural square root */
int sqrt_helper(int n, int guess);



#endif /* MAIN_H */
