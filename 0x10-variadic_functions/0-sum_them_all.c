#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Entry point
 * Description: sum of all its parameters
 * @n: number of argument
 * @...: elipses
 *
 * Return: Sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	unsigned int sum = 0;

	if (n > 0)
	{
		va_start(valist, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(valist, int);
		}
		va_end(valist);
	}
	return (sum);
}
