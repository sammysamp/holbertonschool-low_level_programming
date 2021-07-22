#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print elements
 * @separator: string separator
 * @n: number of elements (integer)
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
		printf("%d %s", va_arg(ap, int), separator);
	printf("%d", va_arg(ap, int));
	va_end(ap);
	printf("\n");
}
