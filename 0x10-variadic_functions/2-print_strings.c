#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string elements
 * @separator: string separator
 * @n: number of elements (integer)
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%s %s", va_arg(ap, char*), separator);
		else
			printf("%s", va_arg(ap, char*));
	}
	printf("%s", va_arg(ap, char*));
	va_end(ap);
	printf("\n");
}
