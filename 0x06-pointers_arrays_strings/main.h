#ifndef MAIN_H 
#define MAIN_H 
#include <unistd.h>


/* prints a single character to stdout */ 
int _putchar(char c); 
/* concatenates two strings */ 
char *_strcat(char *dest, char *src);

/* concatenates two strings */
char *_strncat(char *dest, char *src, int n);

/* copies a string */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings */
int _strcmp(char *s1, char *s2);

/* reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* changes all lowercase letters to uppercase */
char *string_toupper(char *str);

/* capitalizes all workds of a string */
char *cap_string(char *);

/* encodes a string to 1337 */
char *leet(char *str);

/* encodes a string using rot13 */
char *rot13(char *str);

/* prints an integer */
void print_number(int n);

/* prints a[2] = 98 */
int main(void);

/* adds two numbers */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* prints a buffer */
void print_buffer(char *b, int size);


#endif /* MAIN_H */
