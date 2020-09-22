#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - check number and return absolute value
 * @n: the number to be checked
 * Return: Absolute number
 */
int print_last_digit(int n)
{
int r;
r = n % 10;
if (r < 0)
r = -1 * r;
_putchar('0' + r);
return (r);
}
