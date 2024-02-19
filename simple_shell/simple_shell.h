#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H


/*---LIBRARIES---*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>


/*---Macros---*/
#define TOK_DELIM " \t\r\n\a"
#define INITIAL_BUFFER_SIZE 64
#define BUFFER_INCREMENT 64
#define BUFFER_SIZE 1024

extern char **environ;


/*---PROTOTYPES---*/
/* main.c */
void interactive_state(void);

/* interactive_state.c */
char *read_line(void);
char **split_line(char *line);
int execute_arguments(char **args);
int execute_piped_command(char **args);
void execute_process(char **args);


/*---Custom_getline.c---*/
char *custom_getline(void);

/*---Builtin func---*/
int own_env(char **args);

#endif
