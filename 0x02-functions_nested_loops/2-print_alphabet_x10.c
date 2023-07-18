#include "main.h"

/**
 * print_alphabet_x10 - prints the aphabet 10x in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char alphabet;
int i, j;

for (j = 0; j < 10; j++)
{
alphabet = 'a';
for (i = 0; i < 26; i++)
{
_putchar(alphabet);
alphabet++;
}

_putchar('\n');
}
}
