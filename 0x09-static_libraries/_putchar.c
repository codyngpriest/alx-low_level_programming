#include "main.h"



/**
* _putchar - prints a single character to stdout
* @c: the character to print
*
* Return: the printed character
*
*/



int _putchar(char c)
{
return (write(1, &c, 1));
}

