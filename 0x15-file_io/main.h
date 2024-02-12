#ifndef MAIN_H
#define  MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* reads a text file and prints it to the POSIX stdout */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
