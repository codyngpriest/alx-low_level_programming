#include "simple_shell.h"

#define MAX_TOKENS 64
#define MAX_TOKEN_LENGTH 32

/**
 * tokenize - Tokenizes strings.
 * @line: The line to tokenize.
 * @tokens: The array to store the tokens.
 *
 * Return: void.
 */

void tokenize(const char *line, char **tokens)
{
int length;
int index = 0;
int token_count = 0;
int start;

if (line == NULL || tokens == NULL)
return;

while (line[index] != '\0' && token_count < MAX_TOKENS - 1)
{
/* Skip leading whitespace */
while (line[index] == ' ' || line[index] == '\t')
index++;

/* Mark the start of the token */
start = index;

/* Find the end of the token */
while (line[index] != '\0' && line[index] != ' ' && line[index] != '\t')
index++;

/* Copy the token into the tokens array */
length = index - start;
tokens[token_count] = strndup(line + start, length);
if (tokens[token_count] == NULL)
{
perror("strndup");
exit(EXIT_FAILURE);
}
token_count++;
}

/* Add a NULL terminator to indicate the end of the tokens array */
tokens[token_count] = NULL;
}

