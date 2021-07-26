#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * fnChar - print char
 * @al: argument list
 */
void fnChar(va_list al)
{
	printf("%c", va_arg(al, int));
}
/**
 * fnInt - print Int
 * @al: argument list
 */
void fnInt(va_list al)
{
	printf("%d", va_arg(al, int));
}
/**
 * fnStr - print Str
 * @al: argument list
 */
void fnStr(va_list al)
{
	char *mychar;
	mychar = va_arg(al, char*);
	printf("%s", mychar);
}
/**
 * fnFloat - print Float
 * @al: argumento list
 */
void fnFloat(va_list al)
{
	printf("%f", va_arg(al, double));
}

/**
 * print_all - print everything
 * @format: string with chars to evaluate
 */
void print_all(const char * const format, ...)
{
	fmt fmts[] = {
		{'c', fnChar},
		{'i', fnInt},
		{'f', fnFloat},
		{'s', fnStr}
	};

	int iformat = 0;
	int ifmt;
	va_list al;
	char *separator = "";

	va_start(al, format);

	while (format && format[iformat] != '\0')
	{
		ifmt = 0;
		while (fmts[ifmt].in != '\0')
		{
			if (fmts[ifmt].in == format[iformat])
			{
				printf("%s", separator);
				fmts[ifmt].fn(al);
				separator = ", ";
				break;
			}
			ifmt++;
		}
		iformat++;
	}
	va_end(al);
	printf("\n");
}
