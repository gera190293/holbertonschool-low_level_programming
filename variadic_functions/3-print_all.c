#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all -  function that prints anything
 *@format: list of arguments
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	int f = 0, i = 0;
	char *s = ", ";
	char *str;

	va_start(vl, format);

	while (format && format[f])
		i++;
	while (format && format[i])
	{
		if (i == (f - 1))
			s = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(vl, int), s);
				break;
			case 'i':
				printf("%d%s", va_arg(vl, int), s);
				break;
			case 'f':
				printf("%f%s", va_arg(vl, double), s);
				break;
			case 's':
				str = va_arg(vl, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, s);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(vl);
}
