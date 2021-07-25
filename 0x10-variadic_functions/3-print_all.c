#include <stdio.h>
#include <stdarg.h>

typedef struct fmt
{
	char in;
	void (*fn)(va_list);
} fmt;

void fnChar(va_list al)
{
	printf("%c", va_arg(al, int));
}
void fnInt(va_list al)
{
	printf("%d", va_arg(al, int));
}
void fnStr(va_list al)
{
	printf("%s", va_arg(al, char*));
}
void fnFloat(va_list al)
{
	printf("%f", va_arg(al, double));
}

void fnNULL()
{
	printf("(nil)");
}

void print_all(const char * const format, ...)
{
	fmt fmts[] = {
		{'c', fnChar},
		{'i', fnInt},
		{'f', fnFloat},
		{'s', fnStr},
		{'\0', fnNULL}
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
