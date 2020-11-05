#include <stdio.h>
#include "holberton.h"
/**
 *clear_bit - set bit
 *@n: n
 *@index: index
 *Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{

		*n ^= (0 ^ *n) & (1UL << index);

		return (1);
	}
	return (-1);
}
