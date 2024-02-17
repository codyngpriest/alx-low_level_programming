#include "simple_shell.h"

/**
 * split_line - Splits a string into tokens.
 * @line: The string to be split.
 *
 * Return: An array of tokens.
 */

char **split_line(char *line)
{
int bufsize = INITIAL_BUFFER_SIZE;
int position = 0;
int i;
char **new_tokens;
char **tokens = malloc(bufsize * sizeof(char *));
char *token;
if (!tokens)
{
fprintf(stderr, "Allocation error\n");
exit(EXIT_FAILURE);
}
/* Tokenize line */
token = strtok(line, TOK_DELIM);
while (token != NULL)
{
tokens[position] = token;
position++;
if (position >= bufsize)
{
bufsize += BUFFER_INCREMENT;
new_tokens = malloc(bufsize *sizeof(char *));
if (!new_tokens)
{
fprintf(stderr, "Allocation error\n");
exit(EXIT_FAILURE);
}
/* Copy contents from old buffer to new buffer */
for (i = 0; i < position; i++)
{
new_tokens[i] = tokens[i];
}
free(tokens);
tokens = new_tokens;
}
token = strtok(NULL, TOK_DELIM);
}
tokens[position] = NULL;
return (tokens);
}
