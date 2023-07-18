#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Baur from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
int h1 = hour / 10;
int h2 = hour % 10;
int m1 = minute / 10;
int m2 = minute % 10;

_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
}
}
}
