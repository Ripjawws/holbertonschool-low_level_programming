#include "holberton.h"
/**
 * reverse_array - Entry point
 * Description: reverse element in an array.
 * @a: array will be reversed
 * @n: size of array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int i;
	int j;
	for ( i = 0; i < n; i++)
	{
	}
	j = i - 1;
	i = 0;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
