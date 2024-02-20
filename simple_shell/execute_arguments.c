#include "simple_shell.h"
/**
 * execute_arguments - Executes a simple command.
 * @args: An array of strings representing the command and its arguments.
 *
 * Return: 1 on success, 0 otherwise.
 */
int execute_arguments(char **args)
{
int status;
if (args[0] == NULL)
{
/* Empty command was entered */
return (1);
}
/* Check if the command is "exit" */
if (strcmp(args[0], "exit") == 0)
{
if (args[1] != NULL)
{
status = atoi(args[1]);
exit(status);
}
else
{
exit(EXIT_SUCCESS);
}
}
/* Check if the command is a env */
if (strcmp(args[0], "env") == 0)
{
own_env(args);
return (1);
}
/* Check if the command is a setenv */
if (strcmp(args[0], "setenv") == 0)
{
own_setenv(args);
return (1);
}
/* Check if the command is a unsetenv */
if (strcmp(args[0], "unsetenv") == 0)
{
own_unsetenv(args);
return (1);
}
return (0);
}

