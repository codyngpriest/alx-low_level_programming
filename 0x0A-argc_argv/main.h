#ifndef MAIN_H
#define MAIN_H

#define bool int
#define true 1
#define false 0

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int _putchar(char c);

int _write(int file_descriptor, const char *buffer, unsigned int size);

/* prints its name */
int main(__attribute__((unused)) int argc, char *argv[]);


/* prints all arguments it receives */
int main(int argc, char *argv[]);

int str_to_int(char *str);
void print_number(int num);

bool is_digit(char *str);

int min_coins(int cents);





#endif /* MAIN_H */
