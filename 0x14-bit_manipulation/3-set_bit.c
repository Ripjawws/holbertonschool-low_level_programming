#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - Entry point
 * Description: set 1 to bit at given index
 * @n: base 2 number
 * @index: index of bit will be checked
 * Return: nothing.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{

		*n ^= (-1 ^ *n) & (1UL << index);

		return (1);
	}
	return (-1);
}
