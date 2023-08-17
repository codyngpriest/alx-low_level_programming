#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed bya new line
* @separator: a pointer to the string to be printed between numbers
* @n: is the number of integers passed to the function
*
* Return: Nothing
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; ++i)
{
int num = va_arg(args, int);
printf("%d", num);

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}

