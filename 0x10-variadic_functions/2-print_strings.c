#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Entry point
 * Description: print strings follow by given format
 * @separator: pointer to const char that contain separator(s) between numbers
 * @n: numbers of arguments
 * @...: elipses
 *
 * Return: nothings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *can;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		can = va_arg(list, char*);
		if (can == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", can);
		}
	if (separator != NULL && i < (n - 1))
	{
		printf("%s", separator);
	}
	}
	va_end(list);
	printf("\n");
}
