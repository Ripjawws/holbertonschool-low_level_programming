#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer
 * Return: natural square root or -1 if no square root
 */
int _sqrt_recursion(int n)
{
	return (natural(n, 1));
}

/**
 * natural - helper function for _sqrt_recursion
 * @i: integer
 * @j: integer
 * Return: square root if found; -1 if not found
 */

int natural(int i, int j)
{
	int square = j * j;

	if (square > i)
		return (-1);
	if (square == i)
		return (j);
	else
		return (natural(i, j + 1));

}
