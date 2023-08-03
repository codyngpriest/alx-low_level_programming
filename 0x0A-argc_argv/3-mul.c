#include "main.h"

/**
 * str_to_int - converts a string to int
 * @str: a pointer to the string
 * Return: 0
 */

int str_to_int(char *str)
{
int result = 0;
int sign = 1;
int i = 0;

if (str[i] == '-')
{
sign = -1;
i++;
}

while (str[i] != '\0')
{
if (str[i] >= '0' && str[i] <= '9')
{
result = result * 10 + (str[i] - '0');
i++;
}
else
{
break;
}
}

return (result *sign);
}

/**
 * print_number - prints a number
 * @num: the number to print
 * Return: void
 */

void print_number(int num)
{
int temp = num;
int divisor = 1;

if (num == 0)
{
_putchar('0');
return;
}

if (num < 0)
{
_putchar('-');
temp = -num;
}

while (temp / divisor > 9)
{
divisor *= 10;
}

while (divisor > 0)
{
_putchar((temp / divisor) +'0');
temp %= divisor;
divisor /= 10;
}
}

/**
* main - multiplies two numbers
* @argc: the counter
* @argv: a pointer to the characters
* Return: the result of the mul
*/

int main(int argc, char *argv[])
{
int num1, num2, result;

/* Check if the program received exactly two arguments */
if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}

num1 = str_to_int(argv[1]);
num2 = str_to_int(argv[2]);

/* Perform multiplication */
result = num1 *num2;

/* Print the result */
print_number(result);
_putchar('\n');

return (0);
}

