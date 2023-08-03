#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int _putchar(char c);

int _write(int file_descriptor, const char *buffer, unsigned int size);

/* prints its name */
int main(__attribute__((unused)) int argc, char *argv[]);


/* prints all arguments it receives */
int main(int argc, char *argv[]);

int str_to_int(char *str);
void print_number(int num);

#endif /* MAIN_H */
