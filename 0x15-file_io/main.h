#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <elf.h>

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

/* displays the information contained in the ELF header at the start of ELF */
void print_elf_header(char *filename);
void read_elf_header(int fd, Elf64_Ehdr *elf_header);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char e_ident_class);
void print_data(unsigned char e_ident_data);
void print_version(unsigned char e_ident_version);
void print_os_abi(unsigned char e_ident_osabi);
void print_abi_version(unsigned char e_ident_abiversion);
void print_type(uint16_t e_type);
void print_entry_point(Elf64_Addr e_entry);

#endif /* MAIN_H */

