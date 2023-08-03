#include "main.h"


/**
* main - prints all arguments it receives
* @argc: the counter
* @argv: the pointer to the arguments
* Return: the number of arguments received
*/


int main(int argc, char *argv[])
{
int i, j;
/* Start from index 0 to include the program name */
for (i = 0; i < argc; i++)
{
char *argument = argv[i];

/* Print each character of the argument until we reach the null terminator */
for (j = 0; argument[j] != '\0'; j++)
{
_putchar(argument[j]);
}

/* Print a new line after each argument */
_putchar('\n');
}

return (0);
}
