#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _abs(int x)
{
  int y = (x >> 31);
  return (x ^ y) - y;
}
