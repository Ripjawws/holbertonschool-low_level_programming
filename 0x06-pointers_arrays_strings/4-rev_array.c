#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
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
