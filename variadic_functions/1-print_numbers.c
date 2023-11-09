#include "varidic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator: separator of number
 *@n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	if (n == NULL)
		return (0);

	va_start(vl, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(vl, const unsigned int), separator);
	printf("\n");
	va_end(vl);
}
