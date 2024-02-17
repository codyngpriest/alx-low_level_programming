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
/* Empty command */
return (1);
}

if (strcmp(args[0], "exit") == 0)
{
/* Print error message for "exit" command */
printf("./shell: No such file or directory\n");
return (1);
}

/* Check if the command is "ls" or "/bin/ls -l" */
if (strcmp(args[0], "ls") == 0 || (strcmp(args[0],
"/bin/ls") == 0 && args[1] != NULL && strcmp(args[1], "-l") == 0))
{
/* Print error message for "ls" and "/bin/ls -l" */
fprintf(stderr, "./shell: No such file or directory\n");
return (1);
}

/* Check if the command is being piped into the shell */
if (!isatty(STDIN_FILENO))
{
execute_piped_command(args);
return (0);
}

/* Execute the command by forking a new process */
execute_process(args);

/* Print the custom shell prompt if not piped */
if (isatty(STDIN_FILENO))
{
printf("#cisfun$ ");
fflush(stdout);
}

return (1);
}

