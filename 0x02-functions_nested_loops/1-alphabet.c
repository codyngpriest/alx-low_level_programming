#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed by a newline
 *
 * Return: 0
 */

void print_alphabet(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}

_putchar('\n');


}
