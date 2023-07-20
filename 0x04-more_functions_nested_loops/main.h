#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* prints a charater to stdout */
int _putchar(char c);

/* checks for uppercase character */
int _isupper(int c);

/* checks for a digit (0 through 9) */
int _isdigit(int c);

/* multiplies two integers */
int mul(int a, int b);

/* prints numbers from 0 to 9 */
void print_numbers(void);

/* prints numbers from 0 to 9 */
void print_most_numbers(void);

/* prints 10 times the numbers 0 to 14 */
void more_numbers(void);

/* draws a straight line in the terminal */
void print_line(int n);

/* draws a diagonal line on the terminal */
void print_diagonal(int n);

/* prints a square */
void print_square(int size);

/* prints numbers from 1 to 100 but with Fizz, Buzz */
int main(void);

/* prints a triangle */
void print_triangle(int size);

/* finds and prints the largest prime factor */
int main(void);


#endif /* MAIN_H */
