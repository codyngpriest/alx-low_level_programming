#include "main.h"

/**
 * count_words - helper function to count words
 * @str: a pointer to the string
 * Return: the counted words
 */

int count_words(char *str)
{
int count = 0;
int in_word = 0;

while (*str != '\0')
{
if (*str == ' ')
{
if (in_word)
in_word = 0;
}
else
{
if (!in_word)
{
in_word = 1;
count++;
}
}
str++;
}
return (count);
}

/**
 * strtow - splits a string into words
 * @str: a pointer to a string
 * Return: the split words
 */

char **strtow(char *str)
{
int num_words, j, i, len;
char **words;
if (str == NULL || *str == '\0')
return (NULL);
num_words = count_words(str);
if (num_words == 0)
return (NULL);
words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
while (*str != '\0')
{
if (*str != ' ')
{
len = 0;
while (str[len] != ' ' && str[len] != '\0')
len++;
words[i] = (char *)malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
words[i][j] = str[j];
words[i][len] = '\0';
i++;
str += len;
}
else
{
str++;
}
}
words[num_words] = NULL;
return (words);
}

