#include "holberton.h"
/**
 * print_triangle - print triangle #
 * @size: size of triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
int r, c;
if (size <= 0)
_putchar('\n');
for (r = 0; r < size; r++) /*for create n of line */
{
for (c = 0; c < size; c++) /*print n of #*/
{
if (c < size - r - 1)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
