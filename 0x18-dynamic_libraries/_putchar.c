#include "main.h"

/**
 * _putchar - prints a character to stdout
 *
 * @c: The character to print to stdout
 *
 * Return: Writes the given character to stdout
 */


int _putchar(char c)
{
return (write(1, &c, 1));
}
