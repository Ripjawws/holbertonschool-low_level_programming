#include "holberton.h"
/**
 * more_numbers - print the character from 0 to 14, 10 times
 */
void more_numbers(void)
{
int ch;
int i;
for (i = 0; i <= 10; i++)
{
for (ch = 0; ch < 15; ch++)
{
if (ch > 9)
_putchar((ch / 10) + '0');
_putchar((ch % 10) + '0');
}
_putchar('\n');
}
}

