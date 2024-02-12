#ifndef MAIN_H
#define  MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* reads a text file and prints it to the POSIX stdout */
ssize_t read_textfile(const char *filename, size_t letters);

/* creates a file */
int create_file(const char *filename, char *text_content);

/* appends text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);


#endif /* MAIN_H */
