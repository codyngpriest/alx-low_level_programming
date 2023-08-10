#include "main.h"

/**
* multiply_digit - multiplies two numbers
* @num1: first number
* @num2: second number
*
* Retun: the result of the multiplication
*/

int multiply_digit(char num1, char num2)
{
return ((num1 - '0') * (num2 - '0'));
}

/**
* print_number - prints a number
* @num: a pointer to the number
* Return: void
*/

void print_number(char *num)
{
int i = 0;
while (num[i] == '0' && num[i + 1] != '\0')
i++;

while (num[i] != '\0')
{
_putchar(num[i]);
i++;
}
}

/**
* reverse_string - reverses a string
* @str: a pointer to the string
* @length: the length of the string
* Return: void
*/

void reverse_string(char *str, int length)
{
int start = 0;
int end = length - 1;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}

/**
* multiply_and_print - multiplies and prints numbers
* @num1: a pointer to first number
* @num2: a pointer to second number
* Return: void
*/
void multiply_and_print(char *num1, char *num2)
{
int len1 = 0, len2 = 0;
int result_size, i, j, sum, product, carry = 0;
char *result;
while (num1[len1] != '\0')
len1++;
while (num2[len2] != '\0')
len2++;
result_size = len1 + len2;
result = malloc(result_size + 1);
if (result == NULL)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return;
}
for (i = 0; i < result_size; i++)
result[i] = '0';
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
product = multiply_digit(num1[i], num2[j]);
sum = result[i + j + 1] - '0' + product + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10 + '0';
}
result[i + j + 1] += carry;
}
result[result_size] = '\0';
print_number(result);
_putchar('\n');
free(result);
}

/**
* main - Entry point
* @argc: the argument counter
* @argv: a pointer to the arguments
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
char *num1;
char *num2;
int i;
if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
_putchar(0x00);
return (98);
}
num1 = argv[1];
num2 = argv[2];

for (i = 0; num1[i] != '\0'; i++)
{
if (!isdigit(num1[i]))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
_putchar(0x00);
return (98);
}
}
for (i = 0; num2[i] != '\0'; i++)
{
if (!isdigit(num2[i]))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
_putchar(0x00);
return (98);
}
}
multiply_and_print(num1, num2);
_putchar(0x00);
return (0);
}
