#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or the corresponding error code
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open_file(argv[1], O_RDONLY, 0);
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

copy_file(argv[1], argv[2]);

close_file(fd_from);
close_file(fd_to);

return (0);
}

/**
 * open_file - Opens a file
 * @filename: Pointer to the file
 * @flags: flags assocaited with the file
 * @mode: the mode to open the file
 *
 * Return: The opened file
 */

int open_file(char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);

if (fd == -1)
{
if (flags & O_RDONLY)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
else if (flags & O_WRONLY)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(98);
}

return (fd);
}


/**
 * close_file - Closes a file
 * @fd: a pointer to the file
 *
 * Return: void
 */

void close_file(int fd)
{
if (close(fd) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
}

/**
 * copy_file - Copies a file
 * @source: The source file to copy
 * @destination: The destination to copy the file to
 *
 * Return: void
 */

void copy_file(char *source, char *destination)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
int fd_from = open_file(source, O_RDONLY, 0);
int fd_to = open_file(destination, O_WRONLY | O_CREAT | O_TRUNC, 0664);

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);

if (bytes_written == -1 || bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
close_file(fd_from);
close_file(fd_to);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
close_file(fd_from);
close_file(fd_to);
exit(98);
}

close_file(fd_from);
close_file(fd_to);
}
