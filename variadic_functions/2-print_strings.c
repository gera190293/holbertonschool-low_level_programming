#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - function that prints strings, followed by a new line
 *@separator: separator of strings
 *@n: numbers of variables
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	const char *s;

	va_start(vl, n);

	if (separator == NULL || *separator == 0)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(vl, char *);

		if (s == NULL)
			printf("(nil)");
		else
		{
			if (i == n - 1)
				printf("%s", s);
			else
				printf("%s%s", s, separator);
		}
	}
	printf("\n");
	va_end(vl);
}
