#include "main.h"

/**
 * is_digit - checks if a character is a digit
 * @str: a pointer to the string
 * Return: true
 */
bool is_digit(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
return (false);
}
return (true);
}
/**
 * str_to_int - converts a string to int
 * @str: apointer to the string
 * Return: 0
 */
int str_to_int(char *str)
{
int result = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
result = result * 10 + (str[i] - '0');
return (result);
}
/**
 * main - add positive numbers
 * @argc: the counter
 * @argv: a pointer to the string
 * Return: 0
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, temp, divisor;
if (argc == 1)
{
_putchar('0');
_putchar('\n');
return (0);
}
for (i = 1; i < argc; i++)
{
if (is_digit(argv[i]))
sum += str_to_int(argv[i]);
else
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
}
temp = sum;
divisor = 1;
if (sum < 0)
{
_putchar('-');
temp = -sum;
}
while (temp / divisor > 9)
divisor *= 10;
while (divisor > 0)
{
_putchar((temp / divisor) +'0');
temp %= divisor;
divisor /= 10;
}
_putchar('\n');
return (0);
}
