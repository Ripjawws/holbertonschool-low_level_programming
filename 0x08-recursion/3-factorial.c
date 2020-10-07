#include "holberton.h"

/**
 * factorial - Entry point
 * Description: use recursion to calculate factorial of n
 * @n: n will be calculated
 *
 * Return: fact of n
 */
int factorial(int n)
{

		if (n == 0)
			return (1);
		else if (n < 0)
			return (-1);
		return (n * factorial(n - 1));
}
