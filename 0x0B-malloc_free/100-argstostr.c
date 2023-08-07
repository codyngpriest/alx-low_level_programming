#include "main.h"

/**
* argstostr - concatenates all arguments of a program
* @ac: the counter
* @av: a pointer to a pointer
* Return: NULL if ac == 0 or av == NULL
*/

char *argstostr(int ac, char **av)
{
int i, j, index, total_length;
char *concatenated;
if (ac == 0 || av == NULL)
return (NULL);
total_length = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
total_length++;
j++;
}
total_length++;
}
concatenated = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
index = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
concatenated[index] = av[i][j];
index++;
j++;
}
concatenated[index] = '\n';
index++;
}
concatenated[index] = '\0';
return (concatenated);
}
