#include "main.h"


/**
* main - prints the number of arguments passed to it
* @argc: the counter
* @argv: a pointer to the arguments
* Return: the number of arguments passed
*
*/


int main(__attribute__((unused)) int argc, char *argv[])
{
int count = 0;

/* Count the number of arguments (excluding the program name) */
while (argv[count] != 0)
{
count++;
}

/* Print the number of arguments */
/* char digit; */
if (count > 0)
{
int num = count - 1;
int temp;
int divisor = 10000;

/* Print each digit of the number */
while (divisor != 0)
{
temp = num / divisor;
if (temp != 0 || divisor == 1)
{
_putchar('0' + temp);
}
num = num % divisor;
divisor /= 10;
}
}
else
{
/* If no arguments, print '0' for count */
_putchar('0');
}
_putchar('\n');
return (0);
}

