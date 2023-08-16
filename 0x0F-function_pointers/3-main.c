#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
* main - Entry Point
* @argc: the argument counter
* @argv: a pointer to the array
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int num1, num2;
int (*func)(int, int);
char *operator;
if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];

func = get_op_func(operator);

if (func == NULL)
{
printf("Error\n");
return (99);
}

if ((*operator == '/' || *operator == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

printf("%d\n", func(num1, num2));
return (0);
}

