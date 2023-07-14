#include <stdio.h>

/**
 * main - prints all alphabets in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
char lowercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase != 'e' && lowercase != 'q')
{
putchar(lowercase);
}
}

putchar('\n');

return (0);
}
