#include "main.h"

/**
* main - prints its name follwed by a new line
* @argc: the argument counter
* @argv: a pointer to the number of arguments
*
* Return: the name of the program
*/


int main(__attribute__((unused)) int argc, char *argv[])
{
int i;
char newline = '\n';
char *program_name = argv[0];

/* Print the characters one by one using _putchar */
for (i = 0; program_name[i] != '\0'; i++)
{
_putchar(program_name[i]);
}

/* Print newline character */
_putchar(newline);

return (0);
}

