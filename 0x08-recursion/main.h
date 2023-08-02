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

/* returns 1 for prime numbers otherwise 0 */
int is_prime_number(int n);

/* helps print prime numbers */
int is_divisible(int n, int i, int limit);


/* returns 1 for a palindrome otherwise 0 */
int is_palindrome(char *s);

/* helps check if a string is a palindrome */
int is_palindrome_helper(char *s, int start, int end);

/* calculates the length of a string */
int _strlen(char *s);


/* compares the identity of two strings */
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */
