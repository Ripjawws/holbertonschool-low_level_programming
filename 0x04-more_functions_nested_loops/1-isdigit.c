#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - check the c is a digit
 * @c: the character to be checked
 * Return: 1 if lowercase and 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
