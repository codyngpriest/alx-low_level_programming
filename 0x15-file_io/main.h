#ifndef MAIN_H
#define  MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/* reads a text file and prints it to the POSIX stdout */
ssize_t read_textfile(const char *filename, size_t letters);

/* creates a file */
int create_file(const char *filename, char *text_content);

/* appends text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

/* copies the content of a file to another file */
int main(int argc, char *argv[]);
int open_file(char *filename, int flags, mode_t mode);
void close_file(int fd);
void copy_file(char *source, char *destination);


#endif /* MAIN_H */
