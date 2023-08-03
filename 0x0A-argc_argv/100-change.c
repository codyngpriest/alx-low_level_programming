#include "main.h"

/**
 * min_coins - prints minimum number of coins to make change
 * @cents: the amount of cents to give back
 *
 * Return: the cents
 */

int min_coins(int cents)
{
int coins = 0;

while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
}
else if (cents >= 10)
{
cents -= 10;
}
else if (cents >= 5)
{
cents -= 5;
}
else if (cents >= 2)
{
cents -= 2;
}
else
{
cents -= 1;
}
coins++;
}
return (coins);
}

/**
 * main - prints coins
 * @argc: the counter
 * @argv: a pointer to the string
 * Return: 0
 */

int main(int argc, char *argv[])
{
int cents, coins;

/* Check if exactly one argument is passed */
if (argc != 2)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}

/* Convert the argument to an integer */
cents = atoi(argv[1]);

/* Check if the number passed is negative */
if (cents < 0)
{
_putchar('0');
_putchar('\n');
}
else
{
coins = min_coins(cents);
printf("%d\n", coins);
}
return (0);
}
