#include "main.h"

/**
* puts_half - prints half of a string
* @str: pointer to the string
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n
* characters of the string, where n = (length_of_the_string - 1) / 2
*
* Return: The resulting string
*/

void puts_half(char *str)
{
char *ptr = str;
int length, start;
length = 0;

while (*ptr != '\0')
{
length++;
ptr++;
}

start = (length - 1) / 2;
if (length % 2 == 0)
{
start += 1;
}

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
