#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start (list, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d ", va_arg(list, int));
		}
		printf("%d", va_arg(list, int));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
