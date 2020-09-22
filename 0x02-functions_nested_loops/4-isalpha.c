#include "holberton.h"
#include <stdio.h>
/**
 * _isalpha - check the c is letter
 * @c: the character checked
 * Return: 1 if lowercase or uppercase letter 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
