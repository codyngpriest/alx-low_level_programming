#include "simple_shell.h"

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
int in_quotes = 0;
if (line == NULL || tokens == NULL)
return;
while (line[index] != '\0' && token_count < MAX_TOKENS - 1)
{
while (line[index] == ' ' || line[index] == '\t')
index++;
start = index;

while (line[index] != '\0')
{
if (line[index] == '"')
{
in_quotes = !in_quotes;
}
if ((line[index] == ' ' || line[index] == '\t') && !in_quotes)
{
break;
}
index++;
}
length = index - start;
tokens[token_count] = strndup(line + start, length);
if (tokens[token_count] == NULL)
{
perror("strndup");
exit(EXIT_FAILURE);
}
token_count++;
}
tokens[token_count] = NULL;
}

