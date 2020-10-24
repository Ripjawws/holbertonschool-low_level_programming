#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * Description: print number follow by given format
 * @separator: pointer to const char that contain separator(s) between numbers
 * @n: numbers of arguments
 * @...: elipses
 *
 * Return: nothings
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
		{
			printf("%s%d", separator, va_arg(list, int));
		}
		else
			printf("%d", va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
