#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - check number is positive, negative or zero
 * @n: the character to be checked
 * Return: 1 if lowercase, uppercase letter and 0 otherwise
 */
int print_sign(int n)
{
if (n <= 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar (0);
return (0);
}
else
{
_putchar ('-');
return (-1);
}

return (0);
}
