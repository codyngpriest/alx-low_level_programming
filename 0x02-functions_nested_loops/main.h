#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* prints a character to stdout */
int _putchar(char c);

/* prints alphabets in lowercase */
void print_alphabet(void);

/* prints 10 times the alphabet */
void print_alphabet_x10(void);

/* checks for lowercase character */
int _islower(int c);

/* checks for alphabetic character */
int _isalpha(int c);

/* prints the sign of a number */
int print_sign(int n);

/* computes the absolute value of an integer */
int _abs(int n);

/* prints the last digit of a number */
int print_last_digit(int n);

/* prints every minute of the day of Jack Baur, starting from 00:00 to 23:59 */
void jack_bauer(void);

/* prints the 9 times table starting from 0 */
void times_table(void);

/* adds two integers and returns the result */
int add(int, int);

/* prints all natural numbers from n to 98, followed by a new line */
void print_to_98(int n);

/* print the n times table starting from 0 */
void print_times_table(int n);




#endif /* MAIN_H */
