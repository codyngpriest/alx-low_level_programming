#include "simple_shell.h"

/**
 * execute_arguments - Executes a simple command.
 * @args: An array of strings representing the command and its arguments.
 *
 * Return: 1 on success, 0 otherwise.
 */

int execute_arguments(char **args)
{
if (args[0] == NULL)
{
/* Empty command was entered */
return (-1);
}

/* Check if the command is "exit" */
if (strcmp(args[0], "exit") == 0)
{
exit(EXIT_SUCCESS);
}

/* Check if the command is a builtin */
if (strcmp(args[0], "env") == 0)
{
own_env(args);
return (1);
}
return (0);
}

