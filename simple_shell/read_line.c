#include "simple_shell.h"

/**
 * read_line - Reads a line from stdin.
 *
 * Return: A pointer to the read line.
 */

char *read_line(void)
{
char *line = NULL;
size_t bufsize = 0;

/* Read a line from stdin */
if (getline(&line, &bufsize, stdin) == -1)
{
/* Handle end-of-file condition (Ctrl+D) */
if (feof(stdin))
{
free(line);
printf("\n");
exit(EXIT_SUCCESS);
}
else
{
perror("read_line");
exit(EXIT_FAILURE);
}
}

return (line);
}

