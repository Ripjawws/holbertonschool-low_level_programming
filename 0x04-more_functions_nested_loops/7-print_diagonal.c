#include <stdio.h>
#include "holberton.h"

/**
 * print_line - Entry point
 * Description: print n of '_' on screen, followed by new line.
 * 0 and negative number will be print new line.
 * @n: number of '_' is requested by main.c
 * Return: nothing
 */
void print_diagonal(int n)
{
  int i;
  int m = 0;

  if (n > 0)
    {
      while (m != n)
	{
	  for (i = 0; i < m; i++)
	    {
	      _putchar(' ');
	    }
	  _putchar('\\');
	  _putchar('\n');
	  m++;
	}
    }
  else
    _putchar('\n');
}
