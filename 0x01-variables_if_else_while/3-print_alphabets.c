#include <stdio.h>

/**
 *main - prints alphabet in lowercase, in uppercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char lowerCharacter, upperCharacter;

/* print all lowercase letters */
for (lowerCharacter = 'a'; lowerCharacter <= 'z'; lowerCharacter++)
{
putchar(lowerCharacter);
}

/*print all uppercase letters */
for (upperCharacter = 'A'; upperCharacter <= 'Z'; upperCharacter++)
{
putchar(upperCharacter);
}
putchar('\n');
return (0);
}
