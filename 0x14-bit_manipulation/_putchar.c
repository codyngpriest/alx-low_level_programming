#include <unistd.h>

/**
* _puthar - Writes a char to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriatly
*/

int _putchar(char c)
{
  return write(1, &c, 1);
}
